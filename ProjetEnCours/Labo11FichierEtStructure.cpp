// But : Utiliser les fichiers pour stocker les données des utilisateurs
// Calculer la moyenne du groupe d'étudiants
// Auteur : Karine Moreau
// Date : 2021-11-08

#include "Labo11Fonctions.h"



int main()
{
   setlocale(LC_ALL, "");

 
   // Déclaration des variables
   ifstream canalEntree = ouvrirFichierEnLecture(NOM_FICHIER);        // i pour input f pour file et stream pour canal, voie de circulation, route, ... i pour aller du disque dur vers la mémoire
   ofstream canalSortie = ouvrirFichierEnEcriture(RESULTAT);

   info unEtudiuantEtSesNote;
   stats totalMoyennes;

   ecrireEnTete(canalSortie, 2);

   lireEnregistrement(canalEntree, unEtudiuantEtSesNote);

   // On affiche le résultat si on a été capable de lire dans le fichier
   while (!canalEntree.eof())              // e end o of et f pour file eof() c'Est une fonction donc il faut des ()
   {
       calculerSomme(unEtudiuantEtSesNote, totalMoyennes);

       ecrireEnregistrement(canalSortie, unEtudiuantEtSesNote);

      unEtudiuantEtSesNote = lireEnregistrement(canalEntree);
   }
   calculerMoyenne(totalMoyennes);
   ecrirePiedDepage(canalSortie, totalMoyennes);

   cout << "la fin du fichier a été atteinte" << endl;
   canalEntree.close();
   canalSortie.close();    // Cela force le SE à écrire les données sur le disque dur.

   system("pause");
   return 0;
}