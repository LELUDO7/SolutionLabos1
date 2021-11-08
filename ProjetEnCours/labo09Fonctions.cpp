#include "labo09Fonctions.h"

int calculerFrequence(vector<int> vecInt, int valeurChercher)
{
   int nb = 0;
   for (int i = 0; i < vecInt.size(); i++)
   {
	  if (vecInt[i] == valeurChercher)
	  {
		 nb++;
	  }
   }
   return nb;
}

void afficherContenu(vector<int> vecAff, bool commencerParUn)
{
	  for (int i = 0; i < vecAff.size(); i++)
	  {
		 cout << "vec[" << (commencerParUn? i : i+1) << "] = " << vecAff[i] << endl;
	  }
  
}

void afficherContenu(vector<string> vecAff, bool commencerParUn)
{
   for (int i = 0; i < vecAff.size(); i++)
   {
	  cout << "vec[" << (commencerParUn ? i : i + 1) << "] = " << vecAff[i] << endl;
   }

}

void affichercontenuePairImpair(vector<int> vecPaIp, bool commencerParPair)
{
   for (int i = 0; i < vecPaIp.size(); i++)
   {
	  if (commencerParPair == true && (vecPaIp[i]%2) == 0 )
	  {
		 cout << "vec[" << i << "] = " << vecPaIp[i] << endl;
	  }
	  else if (commencerParPair == false && (vecPaIp[i] % 2) != 0)
	  {
		 cout << "vec[" << i << "] = " << vecPaIp[i] << endl;
	  }
   }
  

}

void afficherParLafin(vector<int> vecAff, bool commencerAZero)
{
   for (int i = vecAff.size()-1; i >= 0; i--)
   {
	  cout << "vec[" << (commencerAZero ? i : i + 1) << "] = " << vecAff[i] << endl;
   }
}

vector<int> supprimerValeur(vector<int> vecASup, int valeurASup)
{
   for (int i = 0; i < vecASup.size(); i++)
   {
	  if (vecASup.at(i) == valeurASup)
	  {
		 vecASup.erase(vecASup.begin() + i);
		 // On doit rester sur la même case
		 i--;
	  }
   }
   return vecASup;
}

vector<int> supprimerValeur2(vector<int> vecASup, int valeurASup)
{
   for (int i = vecASup.size() -1; i >= 0; i--)
   {
	  if (vecASup.at(i) == valeurASup)
	  {
		 vecASup.erase(vecASup.begin() + i);
	  }
   }
   return vecASup;
}

void supprimerValeur3(vector<int>& vecASup, int valeurASup)
{
   for (int i = vecASup.size() - 1; i >= 0; i--)
   {
	  if (vecASup.at(i) == valeurASup)
	  {
		 vecASup.erase(vecASup.begin() + i);
	  }
   }
}

void echanger(int& bleu, int& rouge)
{
   int vert;
   vert = bleu;
   bleu = rouge;
   rouge = vert;
}
