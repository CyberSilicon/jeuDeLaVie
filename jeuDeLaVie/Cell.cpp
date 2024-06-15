#include "Cell.hpp"
#include <iostream>
using namespace std;


void Cell::Affiche()
{
	if(statut == 1){
		cout << "X";
	}
	else{
		cout << " ";
	}
}

bool Cell::Evolve()
{
	statut = statut_futur;
	return statut;
}
