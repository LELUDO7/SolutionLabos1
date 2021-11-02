// But : Utiliser des vecteur pout stocker plusieurs information du même type : Exemples des note des étudiants
// Auteur : Ludovic Fournier
// Date : 2021-11-02

#include "labo09Fonctions.h"

/*
1.Afficher la taille du vecteur.
2.Afficher le contenu de la première case.
3.Afficher le contenu de la dernière case.
4.Afficher le nombre de cases qui contiennent une valeur nulle.
5.Afficher le numéro de la case et son contenu sous la forme vec[#]= Valeur.
6.Afficher les cases du vecteur dont le contenu est pair.
7.Afficher le vecteur en commençant par la fin.
8.Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxième temps les cases d'indice impair.
*/

int main()
{
   setlocale(LC_ALL, "");
   
   //Déclaration des variable
   vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };

   //1.Afficher la taille du vecteur.
   cout << "exercise #1\n\n";
   
   cout << "La taille du vecteur est : " << vec.size() << endl;

   //2.Afficher le contenu de la première case.
   cout << "exercise #2\n\n";

   cout << "Le contenue de la première case est : " << vec.at(0) << endl;
   cout << "Le contenue de la première case est : " << vec[0] << endl;
   cout << "Le contenue de la première case est : " << vec.front() << endl;

   //3.Afficher le contenu de la dernière case.
   cout << "exercise #3\n\n";

   cout << "Le contenue de la première case est : " << vec.at(vec.size()-1) << endl;
   cout << "Le contenue de la première case est : " << vec[vec.size()-1] << endl;
   cout << "Le contenue de la première case est : " << vec.back() << endl;

   //4.Afficher le nombre de cases qui contiennent une valeur nulle.
   cout << "exercise #4\n\n";

   cout << "vec contien " << calculerFrequence(vec, 0) << " case avec la valeur nulle" << endl;
   
  /*
   //5.Afficher le numéro de la case et son contenu sous la forme vec[#] = Valeur.
   cout << "exercise #5\n\n";

   afficherContenu(vec, true);
   */

   //6.Afficher les cases du vecteur dont le contenu est pair.
   cout << "exercise #6\n\n";

   affichercontenuePairImpair(vec, false);

  // 7.Afficher le vecteur en commençant par la fin.
   cout << "exercise #7\n\n";

   afficherParLafin(vec, true);


   system("pause");
   return 0;
}