// But : Utiliser des fonctions pour aligner correctement du texte dans la console en utilisant la bibliotèque iomanip
// Auteur : Ludovic Fournier
// Date : 2021-10-25

#include "Labo07Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
   
   const int LargeurCol1 = 25;
   const int LargeurCol2 = 15;

   //déclaation des varables 
   int a = 11;
   int b = 123;
   int c = 1023;
   int d = 95670;
   int menu;
   char typeRemp;
   string titre;

   cout << "Veuillez entrer un type de remplisage : " << endl;
   cin >> typeRemp;

   cin.ignore(1, '\n');

   cout << "Veuillez entrer un titre : " << endl;
   getline(cin, titre, '\n');

   system("cls");

   centrerTitre(titre, LargeurCol1 + LargeurCol2 + 3, typeRemp, true);

   cout << left << setfill(' ') << setw(LargeurCol1) << "Valeurs de a " << " : " << right << setfill('.') << setw(LargeurCol2) << a << endl;
   cout << left << setfill(' ') << setw(LargeurCol1) << "Valeurs de b " << " : " << right << setfill('.') << setw(LargeurCol2) << b << endl;
   cout << left << setfill(' ') << setw(LargeurCol1) << "Valeurs de c " << " : " << right << setfill('.') << setw(LargeurCol2) << c << endl;
   cout << left << setfill(' ') << setw(LargeurCol1) << "Valeurs de d " << " : " << right << setfill('.') << setw(LargeurCol2) << d << endl;
   cout << left << setfill('-') << setw(LargeurCol1 + LargeurCol2 + 3) << "" << endl; //+3 Car 3 caractères de plus pour le 
   cout << left << setfill(' ') << setw(LargeurCol1) << "Some : " << " : " << right << setfill('.') << setw(LargeurCol2) << a + b + c + d << endl;
   cout << left << setfill('-') << setw(LargeurCol1 + LargeurCol2 + 3) << "" << endl;
   system("pause");
   return 0;
}