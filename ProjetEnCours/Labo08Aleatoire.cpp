// But : Utiliser l'al�atoire dans un programme
// Auteur : Ludovic Fournier
// Date : 2021-10-26

#include "Labo08Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
   
   
   //d�claation des varables 
   int alea;

   srand(1000);

   alea = rand();

   cout << "premier nombre al�atoire : " << alea << endl;

   for (int i = 0; i < 10; i++)
   {
      cout << "Valeur al�atoire #" << i + 1 << " : " << rand() << endl;
   }

   cout << "Le maximum pour les valeurs al�atoires : " << RAND_MAX << endl;

   system("pause");
   return 0;
}