// But : Utiliser des vecteur pout stocker plusieurs information du même type : Exemples des note des étudiants
// Auteur : Ludovic Fournier
// Date : 2021-11-01

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   

   // Déclaration des constantes
   const int NB_ETUDIANT = 5;

   // Déclaration des variables
   int nbValeurs;

   vector<double> vecNote;     // Ici on a déclaré un contenant pouvant recevoir des doubles. Mais pour l'instant le contenant est vide.


   // Demander à l'utilisateur le nombre d'information voulues
   cout << "Veuillez entrer le nombre de valeurs désirées : ";
   cin >> nbValeurs;

   vector<int> vecEntier(nbValeurs);    // Avec les (), on appelle le constructeur de la classe vector et on lui passe en paramètre le nombre d'éléments que l'on veut dans le vecteur
                                           // chaque élément est automatiquement initialiser à 0 qui est la valeur par default.

   vector<float> vecReel(8, 59.99);       // Le constructeur à deuc paramètres : le premier le nombre d'éléments, le second : la valeur à mettre dans chaque élément

   vector<char> vecVoyelle{ 'a', 'e', 'i', 'o', 'u', 'y' }; // On vient de créer un vecteur de 6 éléments chacun initialisé avec des valeurs différentes

   vector<string> vecPage{"Bonjour", " à ", "tous ! \n\n\n"};



   // Apprendre à afficher le contenu d'un vecteur
   for (int i = 0; i < vecNote.size(); i++)
   {
      cout << "contenue de l'élément #" << i + 1 << " est " << vecNote.at(i) << endl;
   }


   for ( int i = 0; i < vecEntier.size(); i++)
   {
      cout << "contenue de l'élément #" << i + 1 << " est " << vecEntier[i] << endl;
   }

   for (int i = 0; i < vecReel.size(); i++)
   {
      cout << "contenue de l'élément #" << i + 1 << " est " << vecReel[i] << endl;
   }

   for (int i = 0; i < vecVoyelle.size(); i++)
   {
      cout << "contenue de l'élément #" << i + 1 << " est " << vecVoyelle[i] << endl;
   }

   for (int x = 0; x < vecPage.size(); x++)
   {
      cout << vecPage.at(x);
   }

   // Apprendre à modifier le contenue d'un vecteur






   system("pause");
   return 0;
}