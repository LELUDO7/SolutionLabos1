// But : Utiliser les fichier pour stocker les donne�es des utilisateurs
// Calculer la moyenne du groupe d'�tudiants
// Auteur : Ludovic Fournier
// Date : 2021-11-08

#include <iostream>
#include <fstream>  // Biblioth�que pour utiliser les fonctions sur les fichiers
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // D�claration des constantes
   const string NOM_FICHIER = "Donnees.txt";

   // D�claration des variables
   ifstream canalEntree;         // i pour input f pour file et stream pour canal, voie de circulation, route, ... i pour aller du disque dur vers la m�moire

   // On se cr�e autant de variable qu'il y a de champs(colonnes) dans chaque enregistrement
   string etudiant;
   double examen1;
   double examen2;
   double examen3;

   // Il faut initialiser la variable canalEntree : On utilise la fonction open, c'est pas le signe �gal comme pour initialiser un entier
   canalEntree.open(NOM_FICHIER, ios::in);


   if (!canalEntree)
   {
	   cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu �tre ouvert. V�rifier son nom, son emplacement ou vos droits d'acc�s." << endl;
	   system("pause");
	   exit(511);
   }

   // On vas lire le premier enregistrement mais il est possible que le fichier soit vide
   // On tente de lire mais on n'est pas sur du succ�s
   getline(canalEntree, etudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examen3;

   while(!canalEntree.eof())         // e end o of et f pour file eof() c'est une fonction donc il faut des ()
   {
	   // On affiche le r�sultat si on a �t� capable de lire
	   cout << "Apr�s la lecture :" << endl;
	   cout << etudiant << " " << examen1 << " " << examen2 << " " << examen3 << endl;

	   // On tente de lire le prochain enregistrement
	   getline(canalEntree, etudiant, '\t');
	   canalEntree >> examen1;
	   canalEntree >> examen2;
	   canalEntree >> examen3;
   }
   cout << "la fin du fichier a �t� attainte" << endl;

   system("pause");
   return 0;
}