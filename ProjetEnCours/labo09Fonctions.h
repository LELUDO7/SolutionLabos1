#pragma once
// Liste des includes
#include <iostream>
#include <vector>
#include <string>
#include <vector>

using namespace std;

// Listes des constantes


// Listes des prototypes

// Cette fonction recoit deux param�tre : le vecteur et le contenu � comptav=biliser
//Elle retourne le nombre de la valeur cherch�e
int calculerFrequence(vector<int> vecInt, int valeurChercher);

void afficherContenu(vector<int> vecAff, bool commencerParUn);

void afficherContenu(vector<string> vecAff, bool commencerParUn);

void affichercontenuePairImpair(vector<int> vecPaIp, bool commencerParPair);

void afficherParLafin(vector<int> vecAff, bool commencerAZero);

vector<int> supprimerValeur(vector<int> vecASup, int valeurASup);

vector<int> supprimerValeur2(vector<int> vecASup, int valeurASup);

void supprimerValeur3(vector<int>& vecASup, int valeurASup);

void echanger(int& bleu, int& rouge);