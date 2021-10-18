// But : Développer une série de fonctions et de les tester
// Auteur : Ludovic Fournier
// Date : 2021-09-27

#include <iostream>
#include "Labo05fonctions.h"
using namespace std;


void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");     // Appel d'une fonction qui retourne rien de type void

   // Déclaration des variables
   int nb;
   int nb1;
   int nb2;
   int nb3;
   int jour;
   int mois;
   int annee;
   int NBd;

   cout << "============ Test de la fonction dit oui ou non (vrai ou faux, ou true ou false) si son paramètre est pair ============" << endl;
   cout << "Veuillesz entrer un nombre entier : ";
   cin >> NBd;


   if (pairouimpair(NBd)==0)
   {
      cout << "le nombre : "<<NBd <<" est imapair" << endl;
   }
   else
   {
      cout << "le nombre : "<<NBd<<" est pair" << endl;
   }

   //cout << "======= Test de la fonction qui cacule le max de trois nombres ========" << endl;
   
   //cout << "Veuillez entrer un nombre entier : ";
   //cin >> nb1;
  
   //cout << "Veuillez entrer un nombre entier : ";
  // cin >> nb2;

  // cout << "Veuillez entrer un nombre entier : ";
  // cin >> nb3;
 
  // cout << "Le maximum des trois entiers est " << maximum(nb1,nb2,nb3)  << endl;


  // cout << "======== Test de la fonction qui calcule la factorielle d'un nombre entier positif =========" << endl;
   //cout << "Veuillez entrer un nombre entier positif : ";
  // cin >> nb;

  // cout << "La factorielle de " << nb << " est : " << factorielle(nb) << endl;

   // La fonction prend en paramètre le numéro du jour, le numéro du mois et l'année : 30, 9, 2021 ==> 20 septembre 2021
  // cout << "======== Test de la fonction qui affiche le mois d'une date en toute lettre ========" << endl;
  // cout << "veuillez entrer un numéro du jour : ";
  // cin >> jour;

  // cout << "veuillez entrer un numéro du mois : ";
  // cin >> mois;

   //cout << "veuillez entrer l'année : ";
  // cin >> annee;

// appel de la fonction 

   //quelmois(jour, mois, annee);




   system("pause");

}
//plan de test
// nb1 | nb2 | nb3 | R
//  1  |  2  |  3  | 3
//  2  |  3  |  1  | 3
//  3  |  2  |  1  | 3
// -5  | 34  |-45  | 34







