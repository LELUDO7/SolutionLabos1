// But : Utiliser des vecteur pout stocker plusieurs information du m�me type : Exemples des note des �tudiants
// Auteur : Ludovic Fournier
// Date : 2021-11-01

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   

   // D�claration des constantes
   const int NB_ETUDIANT = 5;

   // D�claration des variables
   int nbValeurs;

   vector<double> vecNote;     // Ici on a d�clar� un contenant pouvant recevoir des doubles. Mais pour l'instant le contenant est vide.


   // Demander � l'utilisateur le nombre d'information voulues
   cout << "Veuillez entrer le nombre de valeurs d�sir�es : ";
   cin >> nbValeurs;

   vector<int> vecEntier(nbValeurs);    // Avec les (), on appelle le constructeur de la classe vector et on lui passe en param�tre le nombre d'�l�ments que l'on veut dans le vecteur
                                           // chaque �l�ment est automatiquement initialiser � 0 qui est la valeur par default.

   vector<float> vecReel(8, 59.99);       // Le constructeur � deuc param�tres : le premier le nombre d'�l�ments, le second : la valeur � mettre dans chaque �l�ment

   vector<char> vecVoyelle{ 'a', 'e', 'i', 'o', 'u', 'y' }; // On vient de cr�er un vecteur de 6 �l�ments chacun initialis� avec des valeurs diff�rentes

   vector<string> vecPage{"Bonjour", " � ", "tous ! \n\n\n"};



   // Apprendre � afficher le contenu d'un vecteur
   for (int i = 0; i < vecNote.size(); i++)
   {
      cout << "contenue de l'�l�ment #" << i + 1 << " est " << vecNote.at(i) << endl;
   }


   for ( int i = 0; i < vecEntier.size(); i++)
   {
      cout << "contenue de l'�l�ment #" << i + 1 << " est " << vecEntier[i] << endl;
   }

   for (int i = 0; i < vecReel.size(); i++)
   {
      cout << "contenue de l'�l�ment #" << i + 1 << " est " << vecReel[i] << endl;
   }

   for (int i = 0; i < vecVoyelle.size(); i++)
   {
      cout << "contenue de l'�l�ment #" << i + 1 << " est " << vecVoyelle[i] << endl;
   }

   for (int x = 0; x < vecPage.size(); x++)
   {
      cout << vecPage.at(x);
   }

   // Apprendre � modifier le contenue d'un vecteur






   system("pause");
   return 0;
}