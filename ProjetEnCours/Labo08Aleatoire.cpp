// But : Utiliser l'aléatoire dans un programme
// Auteur : Ludovic Fournier
// Date : 2021-10-26

#include "Labo08Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
   
   
   //déclaation des varables 
   int alea;

   srand(1000);

   alea = rand();

   cout << "premier nombre aléatoire : " << alea << endl;

   for (int i = 0; i < 10; i++)
   {
      cout << "Valeur aléatoire #" << i + 1 << " : " << rand() << endl;
   }

   cout << "Le maximum pour les valeurs aléatoires : " << RAND_MAX << endl;

   system("pause");
   return 0;
}