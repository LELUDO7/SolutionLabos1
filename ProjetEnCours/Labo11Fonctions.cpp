#include "Labo11Fonctions.h"

ifstream ouvrirFichierEnLecture(string nomFichier)
{
    ifstream canal;

    canal.open(nomFichier, ios::in);

    if (!canal)
    {
        cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu �tre ouvert. V�rifiez son nom, son emplacement ou vos droits d'acc�s." << endl;
        system("pause");
        exit(511);
    }

    return canal;
}

ofstream ouvrirFichierEnEcriture(string nomFichier)
{
    ofstream canal;

    canal.open(nomFichier, ios::out);
    if (!canal)
    {
        cerr << "Erreur : le fichier " << RESULTAT << " n'a pas pu �tre cr��. V�rifiez vos droits d'acc�s ou l'espace disque disponible." << endl;
        system("pause");
        exit(811);
    }

    return canal;
}

void ecrireEnTete(ofstream& canal, int nbDecimales)
{
    // On formate l'affiche des nombres � virgule pour avoir syst�matiquement 2 chiffres apr�s la virgule.
   // Par d�faut le format pour les nombres � virgule est le format scientifique. la virgule se d�place tout le temps
   // 123.456 => 1.23456e2
   // L'autre mode est le mode fixed, donc la virgule ne bouge plus
   // 123.456  => 123.456
   // 1234.567 => 1234.57
   // par d�faut la console affiche 6 chiffres significatifs (partie enti�re + partie d�cimale)


   // Pour avoir deux chiffres apr�s la virgule
    canal << fixed << setprecision(nbDecimales);

    /*
    -------------------------------------------------------------------------------------
                    R�sultats du cours de programmation structur�e
    -------------------------------------------------------------------------------------
    Nom �tudiant                           Eval 1    Eval 2    Eval 3     Total R�sultats
    -------------------------------------------------------------------------------------


    */


    // �crire l'en-t�te dans le fichier de sortie
    canal << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
    canal << setfill(MOTIF2) << setw((LARGEUR - TITRE.size()) / 2) << "" << TITRE << setfill(MOTIF2) << setw((LARGEUR - TITRE.size()) / 2) << "" << endl;
    canal << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
    canal << setfill(MOTIF2) << left << setw(COL1) << NOM_COL1 << right << setw(COL2) << NOM_COL2 << setw(COL3) << NOM_COL3 << setw(COL4) << NOM_COL4;
    canal << setw(COL5) << NOM_COL5 << setw(COL6) << NOM_COL6 << endl;
    canal << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
}

void ecrireEnregistrement(ofstream& canal, info EtudiantEnCours)
{
    double total = EtudiantEnCours.examen1 + EtudiantEnCours.examen2 + EtudiantEnCours.examenFinal;

    canal << setfill(MOTIF2) << left << setw(COL1) << EtudiantEnCours.etudiant << right << setw(COL2) << EtudiantEnCours.examen1 << setw(COL3) << EtudiantEnCours.examen2 << setw(COL4) << EtudiantEnCours.examenFinal;
    canal << setw(COL5) << total << setw(COL6) << (total >= NOTE_PASSAGE ? OK : KO) << endl;

}

void ecrirePiedDepage(ofstream& canal, stats moyenne)
{
    canal << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
    canal << STAT << endl;
    canal << setfill(MOTIF2) << left << setw(COL1) << MOYENNE << right << setw(COL2) << moyenne.moyenne1 << setw(COL3) << moyenne.moyenne2 << setw(COL4) << moyenne.moyenne3 << setw(COL5) << moyenne.moyenneTotal << endl;
    canal << setfill(MOTIF1) << setw(LARGEUR) << "" << endl;
}

void lireEnregistrement(ifstream& canal, info& EtudiantEnCours)
{
    // On va lire le enregistrement mais il se peut que le fichier soit vide et que le enregistrement n'existe pas
   // ON TENTE de lire mais on n'est pas s�r du succ�s
    getline(canal, EtudiantEnCours.etudiant, '\t');
    canal >> EtudiantEnCours.examen1;
    canal >> EtudiantEnCours.examen2;
    canal >> EtudiantEnCours.examenFinal;
    // On doit enlever le retour � la ligne dans le fichier de donn�es.
    canal.ignore(1, '\n');        // 1 et '\n' sont les valeurs par d�faut, on n'est pas oblig� de les mettre
}

info lireEnregistrement(ifstream& canal)
{
    info EtudiantEnCours;
    // On va lire le enregistrement mais il se peut que le fichier soit vide et que le enregistrement n'existe pas
   // ON TENTE de lire mais on n'est pas s�r du succ�s
    getline(canal, EtudiantEnCours.etudiant, '\t');
    canal >> EtudiantEnCours.examen1;
    canal >> EtudiantEnCours.examen2;
    canal >> EtudiantEnCours.examenFinal;
    // On doit enlever le retour � la ligne dans le fichier de donn�es.
    canal.ignore(1, '\n');        // 1 et '\n' sont les valeurs par d�faut, on n'est pas oblig� de les mettre
    return EtudiantEnCours;
}

void calculerSomme(info EtudiantEnCours, stats& resultats)
{
    // ICI ON traite les donn�es  : faire des calculs au d�but de la boucle
    resultats.total = EtudiantEnCours.examen1 + EtudiantEnCours.examen2 + EtudiantEnCours.examenFinal;
    resultats.moyenne1 += EtudiantEnCours.examen1;
    resultats.moyenne2 += EtudiantEnCours.examen2;
    resultats.moyenne3 += EtudiantEnCours.examenFinal;
    resultats.moyenneTotal += resultats.total;
    // On a un �tuidiant de plus
    resultats.nbEtudiant++;
}

void calculerMoyenne(stats& moyenne)
{
    if (moyenne.nbEtudiant > 0)
    {
        moyenne.moyenne1 /= moyenne.nbEtudiant;
        moyenne.moyenne2 /= moyenne.nbEtudiant;
        moyenne.moyenne3 /= moyenne.nbEtudiant;
        moyenne.moyenneTotal /= moyenne.nbEtudiant;
    }
}
