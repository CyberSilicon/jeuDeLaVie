#include <iostream>
#include <stdlib.h>
#include "JDLV.hpp"
#include <windows.h>




using namespace std; 

int main() {

	
	JDLV V(30, 20);

	V.Initialise();
	V.Affiche();
	V.Compute_Next_state();
	/*
	int i = 0;
	while (i < 50000)
	{
		cout << "h";
		Sleep(0.01);
		V.Compute_Next_state();
		V.Evolve();
		system("cls");
		V.Affiche();
		i++;
	}
	*/
	return(0);
}