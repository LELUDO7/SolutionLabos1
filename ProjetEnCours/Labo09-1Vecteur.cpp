// But : Utiliser des vecteur pout stocker plusieurs information du m�me type : Exemples des note des �tudiants
// Auteur : Ludovic Fournier
// Date : 2021-11-02

#include "labo09Fonctions.h"

/*
1.Afficher la taille du vecteur.
2.Afficher le contenu de la premi�re case.
3.Afficher le contenu de la derni�re case.
4.Afficher le nombre de cases qui contiennent une valeur nulle.
5.Afficher le num�ro de la case et son contenu sous la forme vec[#]= Valeur.
6.Afficher les cases du vecteur dont le contenu est pair.
7.Afficher le vecteur en commen�ant par la fin.
8.Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxi�me temps les cases d'indice impair.
*/

int main()
{
   setlocale(LC_ALL, "");
   
   //D�claration des variable
   vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };
   vector<string> vecmots{"Bonjour", "Salut", "Bienvenue", "yoo"};
   /*
   //1.Afficher la taille du vecteur.
   cout << "exercise #1\n\n";
   
   cout << "La taille du vecteur est : " << vec.size() << endl;

   //2.Afficher le contenu de la premi�re case.
   cout << "exercise #2\n\n";

   cout << "Le contenue de la premi�re case est : " << vec.at(0) << endl;
   cout << "Le contenue de la premi�re case est : " << vec[0] << endl;
   cout << "Le contenue de la premi�re case est : " << vec.front() << endl;

   //3.Afficher le contenu de la derni�re case.
   cout << "exercise #3\n\n";

   cout << "Le contenue de la premi�re case est : " << vec.at(vec.size()-1) << endl;
   cout << "Le contenue de la premi�re case est : " << vec[vec.size()-1] << endl;
   cout << "Le contenue de la premi�re case est : " << vec.back() << endl;

   //4.Afficher le nombre de cases qui contiennent une valeur nulle.
   cout << "exercise #4\n\n";

   cout << "vec contien " << calculerFrequence(vec, 0) << " case avec la valeur nulle" << endl;
   
  
   //5.Afficher le num�ro de la case et son contenu sous la forme vec[#] = Valeur.
   cout << "exercise #5\n\n";

   afficherContenu(vec, true);
   

   //6.Afficher les cases du vecteur dont le contenu est pair.
   cout << "exercise #6\n\n";

   affichercontenuePairImpair(vec, false);

  // 7.Afficher le vecteur en commen�ant par la fin.
   cout << "exercise #7\n\n";

   afficherParLafin(vec, true);
   */
   //Fonction qui suprime les case contenant une certaine valeurs pass�e en param�tre par exemple 0

   supprimerValeur3(vec, 0);
   cout << "contenue de vec apr�s suppression" << endl;
   afficherContenu(vec, true);

   afficherContenu(vecmots, true);
   
   int R = 10;
   int B = 20;

   cout << "Avant R = " << R << " B = " << B << endl;
   echanger(B, R);
   cout << "Apr�s R = " << R << " B = " << B << endl;

   system("pause");
   return 0;
}