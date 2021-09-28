#include "Labo05fonctions.h"

int maximum(int entier1, int entier2, int entier3)
{
   int resultat;

   if (entier1<=entier2)
   {
      resultat = entier2;
   }
   else
   {
      resultat = entier1;
   }
   if (entier3>=resultat)
   {
      resultat = entier3;
   }
   
  return resultat;
}

unsigned int factorielle(int nb)
{
   unsigned int resultat = 1;

   for (unsigned int i = 1; i <= nb; i++)
   {
      resultat = resultat * i;
   }
   return resultat;
}



