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
   const int NB_ETUDIANT = 2;

   // Déclaration des variables
   int nbValeurs;
   double note;
   double moyenne = 0;

   vector<double> vecNote;     // Ici on a déclaré un contenant pouvant recevoir des doubles. Mais pour l'instant le contenant est vide.


   // Demander à l'utilisateur le nombre d'information voulues
   cout << "Veuillez entrer le nombre de valeurs désirées : ";
   cin >> nbValeurs;

   vector<int> vecEntier(nbValeurs);    // Avec les (), on appelle le constructeur de la classe vector et on lui passe en paramètre le nombre d'éléments que l'on veut dans le vecteur
                                           // chaque élément est automatiquement initialiser à 0 qui est la valeur par default.

   vector<float> vecReel(8, 59.99);       // Le constructeur à deuc paramètres : le premier le nombre d'éléments, le second : la valeur à mettre dans chaque élément

   vector<char> vecVoyelle{ 'a', 'e', 'i', 'o', 'u', 'y' }; // On vient de créer un vecteur de 6 éléments chacun initialisé avec des valeurs différentes

   vector<string> vecPage{"Bonjour", " à ", "tous ! \n\n\n"};


   /*
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

   // Apprendre à modifier le contenue d'un vecteur contenant des éléments
   for (int i = 0; i < vecEntier.size(); i++)
   {
      cout << "Veuillez entrer la valeur #" << i + 1 << " : ";
      cin >> vecEntier.at(i);
   }

   for (int i = 0; i < vecEntier.size(); i++)
   {
      cout << "contenue de l'élément #" << i + 1 << " est " << vecEntier[i] << endl;
   }
   */
   for (int i = 0; i < NB_ETUDIANT; i++)
   {
      cout << "Veuillez entrer la note de l'étudiant #" << i + 1 << " : ";
      cin >> note;
      // On ajoute un ecase dans le vecteur. La case s'ajoute à la fin et on l'initialise avec la valeur passé en paramètre
      vecNote.push_back(note);
   }

   for (int i = 0; i < NB_ETUDIANT; i++)
   {
      cout << "l'étudiant #" << i + 1 << " a obtenu la note de  " << vecNote[i] << endl;
   }

   for (int i = 0; i < NB_ETUDIANT; i++)
   {
    moyenne = moyenne + vecNote[i];
   }


   cout << "La moyenne est de : " << (moyenne / NB_ETUDIANT) << endl;


   // On veut calculer la moyenne du groupe




   system("pause");
   return 0;
}