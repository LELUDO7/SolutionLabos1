// But : comprendre et utiliser un chaine de caractères  : string
// Auteur : Ludovic Fournier
// Date : 2021-10-18

#include <iostream>
#include <string>
using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   
   //déclaation des varables 
   int entier = 0;
   string prenom;       // Ici on a appelé le constructeur de string, qui par default initialise la variable avec une chaine de 
   string adresse;
   string paragraphe;

   cout << "Contenue de prénom : " << entier << endl;
   cout << "Contenue de prénom : " << prenom << endl;

   cout << "Data de la varaible prenom" << prenom.data() << endl;
   cout << "Taille de la varaible prenom" << prenom.size() << endl;
   cout << "Longeur de la varaible prenom" << prenom.length() << endl;
   cout << "Capacité de la varaible prenom" << prenom.capacity() << endl;
   cout << "Taille maximale de la varaible prenom" << prenom.max_size() << endl;

   string chaine1("Bonjour");
   string chaine2("Bonjour à tous ! Et Bienvenue dans le court de programmation");     

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
   cin.ignore();
   cin.ignore(4);
   //cin.ignore('\n');   //GROSSE ERREUR

   cout << "vous vous applez " << prenom << endl;
   
   cout << "Veuillez entrer votre adresse : ";
   //cin >> adresse;
   // Pour permettre la saisie d'espace dans une chaine de caractères il faut utiliser la fonction getline
   getline(cin, adresse, '\n'); // Dans la mémoire du clavier, il reste un enter du prénom. Le getline le trouve et achève sont travail.
                                // Solution : il faudrait vider la mémoire du clavier avant d'utiliser le getline ou après chaque cin

   cout << "Vous habitez au " << adresse << endl;

   

   system("pause");
   return 0;
}