// But : Utiliser l'aléatoire dans un programme
// Auteur : Ludovic Fournier
// Date : 2021-10-26

#include "Labo08Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
   
   
   //déclaation des varables 
   int alea;
   int min;
   int max;

   cout << "Veuillez entrer un min : ";
   cin >> min;

   cout << "Veuillez entrer un max : ";
   cin >> max;


   alea = rand();

   cout << "premier nombre aléatoire : " << alea << endl;

   for (int i = 0; i < 20; i++)
   {
      cout << "Valeur aléatoire #" << i + 1 << " : " << genererAlea(min, max) << endl;
   }

   cout << "Le maximum pour les valeurs aléatoires : " << RAND_MAX << endl;

   system("pause");
   return 0;
}