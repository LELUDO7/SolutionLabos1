// But : comprendre et utiliser un chaine de caract�res  : string
// Auteur : Ludovic Fournier
// Date : 2021-10-18

#include <iostream>
#include <string>
using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   
   //d�claation des varables 
   int entier = 0;
   string prenom;       // Ici on a appel� le constructeur de string, qui par default initialise la variable avec une chaine de 
   string adresse;
   string paragraphe;

   cout << "Contenue de pr�nom : " << entier << endl;
   cout << "Contenue de pr�nom : " << prenom << endl;

   cout << "Data de la varaible prenom" << prenom.data() << endl;
   cout << "Taille de la varaible prenom" << prenom.size() << endl;
   cout << "Longeur de la varaible prenom" << prenom.length() << endl;
   cout << "Capacit� de la varaible prenom" << prenom.capacity() << endl;
   cout << "Taille maximale de la varaible prenom" << prenom.max_size() << endl;

   string chaine1("Bonjour");
   string chaine2("Bonjour � tous ! Et Bienvenue dans le court de programmation");     

   cout << "Data de la varaible chaine1 : " << chaine1.data() << endl;                  // Obtenir le contenue de la variable
   cout << "Taille de la varaible chaine1 : " << chaine1.size() << endl;                // Le nombre de caract�re utilis�s 
   cout << "Longeur de la varaible chaine1 : " << chaine1.length() << endl;             // Le nombre de caract�re utilis�s donc m�me chose que size 
   cout << "Capacit� de la varaible chaine1 : " << chaine1.capacity() << endl;          // L'espace occup� en m�moire 

   cout << "Data de la varaible chaine2 : " << chaine2.data() << endl;
   cout << "Taille de la varaible chaine2 : " << chaine2.size() << endl;
   cout << "Longeur de la varaible chaine2 : " << chaine2.length() << endl;
   cout << "Capacit� de la varaible chaine2 : " << chaine2.capacity() << endl;

   system("cls");

   cout << "Veuillez entrer votre pr�nom : ";
   cin >> prenom;
   // Apr�s chaque cin, il faut s'assurer que le m�moire du clavier soit compl�tement vide. Il faut supprimer les s�parateurs laiss�s par le cin (espace, tabulation ou un enter)
   cin.ignore(1, '\n');
   cin.ignore();
   cin.ignore(4);
   //cin.ignore('\n');   //GROSSE ERREUR

   cout << "vous vous applez " << prenom << endl;
   
   cout << "Veuillez entrer votre adresse : ";
   //cin >> adresse;
   // Pour permettre la saisie d'espace dans une chaine de caract�res il faut utiliser la fonction getline
   getline(cin, adresse, '\n'); // Dans la m�moire du clavier, il reste un enter du pr�nom. Le getline le trouve et ach�ve sont travail.
                                // Solution : il faudrait vider la m�moire du clavier avant d'utiliser le getline ou apr�s chaque cin

   cout << "Vous habitez au " << adresse << endl;

   

   system("pause");
   return 0;
}