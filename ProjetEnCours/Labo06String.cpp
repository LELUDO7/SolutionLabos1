// But : comprendre et utiliser un chaine de caractères  : string
// Auteur : Ludovic Fournier
// Date : 2021-10-18

#include <iostream>
#include <string>
#include "Labo06Fonctions.h"
using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   
   //déclaation des varables 
   int entier = 0;
   string prenom;       // Ici on a appelé le constructeur de string, qui par default initialise la variable avec une chaine de 
   string adresse;
   string paragraphe;
   /*
   cout << "Contenue de prénom : " << entier << endl;
   cout << "Contenue de prénom : " << prenom << endl;

   cout << "Data de la varaible prenom" << prenom.data() << endl;
   cout << "Taille de la varaible prenom" << prenom.size() << endl;
   cout << "Longeur de la varaible prenom" << prenom.length() << endl;

   cout << "Capacité de la varaible prenom" << prenom.capacity() << endl;
   cout << "Taille maximale de la varaible prenom" << prenom.max_size() << endl;

   string chaine1("Bonjour");
   string chaine2("Bonjour à tous !");     

   cout << "Data de la varaible chaine1 : " << chaine1.data() << endl;                  // Obtenir le contenue de la variable
   cout << "Taille de la varaible chaine1 : " << chaine1.size() << endl;                // Le nombre de caractère utilisés 
   cout << "Longeur de la varaible chaine1 : " << chaine1.length() << endl;             // Le nombre de caractère utilisés donc même chose que size 
   cout << "Capacité de la varaible chaine1 : " << chaine1.capacity() << endl;          // L'espace occupé en mémoire 

   cout << "Data de la varaible chaine2 : " << chaine2.data() << endl;
   cout << "Taille de la varaible chaine2 : " << chaine2.size() << endl;
   cout << "Longeur de la varaible chaine2 : " << chaine2.length() << endl;
   cout << "Capacité de la varaible chaine2 : " << chaine2.capacity() << endl;

   system("cls");

   cout << "Veuillez entrer votre prénom : ";
   cin >> prenom;
   // Après chaque cin, il faut s'assurer que le mémoire du clavier soit complétement vide. Il faut supprimer les séparateurs laissés par le cin (espace, tabulation ou un enter)
   cin.ignore(1, '\n');
   //cin.ignore();
   //cin.ignore(4);
   //cin.ignore('\n');   //GROSSE ERREUR

   cout << "vous vous applez " << prenom << endl;
   
   cout << "Veuillez entrer votre adresse : ";
   //cin >> adresse;
   // Pour permettre la saisie d'espace dans une chaine de caractères il faut utiliser la fonction getline
   getline(cin, adresse, '\n'); // Dans la mémoire du clavier, il reste un enter du prénom. Le getline le trouve et achève sont travail.
                                // Solution : il faudrait vider la mémoire du clavier avant d'utiliser le getline ou après chaque cin

   cout << "Vous habitez au " << adresse << endl;

   cout << "Veullez vous présenter : ";
   getline(cin, paragraphe, '\\');

   cout << "Votre letre de présentation : " << paragraphe << endl;

   cin.ignore(10000, '\n');

   getline(cin, prenom, '\n');
   cout << "votre prénom : " << prenom << endl;

   if (prenom=="karine")
   {
      cout << "C'est mon amie" << endl;
   }
   else
   {
      cout << "Ce n'est pas mon amie" << endl;
   }

   if (prenom >="Arthur")
   {
      cout << prenom << " vien après Arthur" << endl;
   }
   if (prenom<="Zoe")
   {
      cout << prenom << " vient avant Zoe" << endl;
   }

   // On veut concatémer une chaine avec une autre : c'est à dire ajouter un bout de la première la deuxième chaine
   chaine1 += " " + chaine2 + "\n";

   cout << chaine1;
   
   // On veut enlever des caractère au prenom Karine = kane
   prenom = "Karine";
   prenom.erase(2, 4);

   cout << prenom <<endl;

   // On veut effacer tout le contenue de la varaible
   prenom = "";
   //prenom.clear();
   //prenom.erase();

   cout << prenom << " : " << prenom.size() << endl;

   */

   string clavier;
   int nombre;

   cout << "Veuillez entrer un nombre entier : ";
   // On utilise getline pour être sûr que tout ce que l'utilisateur tape au clavier soit bien retiré de la mémoire du clavier
   getline(cin, clavier, '\n');

   while (!etreUnNombre(clavier))
   {
      cout << "Erreur : On vous demande un nombre entier." << endl;
      cout << "Veuillez entrer un nombre entier : ";
   }

   //On va convertir le contenu du clavier en enteir
   nombre = stoi(clavier);

   cout << "nombre : " << nombre << endl;

   system("pause");
   return 0;
}