// But : creer nos propres fonctions dans une biblioth�que
// 1. il faut d�clarer le prototype de la fonction dans une biblioth�que : donner un nom � une nouvelle fonction
// 2. il faut d�finir la fonction : il faut coder les instructions pour cr�er la fonction
// 3. il faut appeler la fonction  pour l'ex�cuter
// demander � l'utilisateur un nombre 
// le programme appelle une fonction pour calculer le carr� du nombre. Cette fonction doit �tre cod�e par nous-m�me
// Auteur : Karine Moreau
// Date : 2021-09-27

#include <iostream>
#include "Labo05FonctionMath.h"



using namespace std;


void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     // Appel d'une fonction qui retourne rien de type void

   // D�claration des variables
   double nb;
  

   cout << "Veuillez entrer un nombre : ";
   cin >> nb;
 
   cout << "Le carr� de " << nb << " est " << calculerCarre(nb) << endl;


   system("pause");

}
// plan de test
//  allo







