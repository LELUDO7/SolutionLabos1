// But : Utiliser les fichier pour stocker les donneées des utilisateurs
// Calculer la moyenne du groupe d'étudiants
// Auteur : Ludovic Fournier
// Date : 2021-11-08

#include <iostream>
#include <fstream>  // Bibliothèque pour utiliser les fonctions sur les fichiers
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des constantes
   const string NOM_FICHIER = "Donnees.txt";

   // Déclaration des variables
   ifstream canalEntree;         // i pour input f pour file et stream pour canal, voie de circulation, route, ... i pour aller du disque dur vers la mémoire

   // On se crée autant de variable qu'il y a de champs(colonnes) dans chaque enregistrement
   string etudiant;
   double examen1;
   double examen2;
   double examen3;

   // Il faut initialiser la variable canalEntree : On utilise la fonction open, c'est pas le signe égal comme pour initialiser un entier
   canalEntree.open(NOM_FICHIER, ios::in);


   if (!canalEntree)
   {
	   cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu être ouvert. Vérifier son nom, son emplacement ou vos droits d'accès." << endl;
	   system("pause");
	   exit(511);
   }

   // On vas lire le premier enregistrement mais il est possible que le fichier soit vide
   // On tente de lire mais on n'est pas sur du succès
   getline(canalEntree, etudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examen3;

   while(!canalEntree.eof())         // e end o of et f pour file eof() c'est une fonction donc il faut des ()
   {
	   // On affiche le résultat si on a été capable de lire
	   cout << "Après la lecture :" << endl;
	   cout << etudiant << " " << examen1 << " " << examen2 << " " << examen3 << endl;

	   // On tente de lire le prochain enregistrement
	   getline(canalEntree, etudiant, '\t');
	   canalEntree >> examen1;
	   canalEntree >> examen2;
	   canalEntree >> examen3;
   }
   cout << "la fin du fichier a été attainte" << endl;

   system("pause");
   return 0;
}