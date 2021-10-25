#include "Labo07Fonctions.h"

void centrerTitre(string Titre, int largeur, char remplissage, bool avecEndl)
{
   cout << setfill(remplissage) << setw((LargeurCol1 + LargeurCol2 + 3 - Titre.length()) / 2) << ""
      << setfill(remplissage) << setw(Titre.length()) << Titre
      << setfill(remplissage) << setw((LargeurCol1 + LargeurCol2 + 3 - Titre.length()) / 2) << "" << (avecEndl ? "\n" :"");
}
