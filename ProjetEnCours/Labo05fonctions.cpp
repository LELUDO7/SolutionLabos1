#include "Labo05fonctions.h"
#include <iostream>

using std::cout;

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

int quelmois(int jour, int mois, int annee)
{
   switch (mois)
   {
      case 1: 
      {
         std::cout << jour << " Janvier " << annee << "\n";
      }
            break;
      case 2:
      {
         std::cout << jour << " Février " << annee << "\n";
      }
            break;
      case 3:
      {
         std::cout << jour << " Mars " << annee << "\n";
      }
            break;
      case 4:
      {
         std::cout << jour << " Avril " << annee << "\n";
      }
            break;
      case 5:
      {
         std::cout << jour << " Mai " << annee << "\n";
      }
            break;
      case 6:
      {
         std::cout << jour << " Juin " << annee << "\n";
      }
            break;
      case 7: 
      {
         std::cout << jour << " Juillet " << annee << "\n";
      }
            break;
      case 8: 
      {
         std::cout << jour << " Aout " << annee << "\n";
      }
            break;
      case 9: 
      {
         std::cout << jour << " Septembre " << annee << "\n";
      }
            break;
      case 10: 
      
         std::cout << jour << "Octobre" << annee << "\n";
      
             break;
      case 11: 
      
         std::cout << jour << "Novembre" << annee << "\n";
      
             break;
      case 12: 
      
         std::cout << jour << "Décembre" << annee << "\n";
      
             break;
   }
    return 0;
}

bool pairouimpair(int nb)
{
   nb = nb % 2;
   if (nb==0)
   {
      return true;
   }
   else
   {
    return false;
   }
  
}



