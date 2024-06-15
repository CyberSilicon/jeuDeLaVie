#include "JDLV.hpp"
#include <iostream>

using namespace std;

JDLV::JDLV()
{
	height = 10; 
	width = 10;
	tabCell = new Cell*[width];

	for (int i = 0; i < width; i++) {
		tabCell[i] = new Cell[height];
	}

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) { 
			tabCell[i][j].setStatut(0);
		}
	}
}

JDLV::JDLV(int h, int w)
{
	height = h;
	width = w;
	tabCell = new Cell * [width];

	for (int i = 0; i < width; i++) {
		tabCell[i] = new Cell[height];
	}

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			tabCell[i][j].setStatut(0);
		}
	}
}

Cell& JDLV::getCell(int x, int y)
{
	return tabCell[x][y];
}



void JDLV::Affiche()
{
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			tabCell[i][j].Affiche();
		}
		cout << endl;
	}
}

void JDLV::Initialise()
{
	tabCell[3][4].setStatut(1);
	tabCell[4][4].setStatut(1);
	tabCell[5][4].setStatut(1);
}


void JDLV::Compute_Next_state()
{
	for (int i = 1; i < width -1; i++) {
		for (int j = 1; j < height-1; j++) {
			int sommeCellVoisi = 0;
			sommeCellVoisi +=  
				tabCell[i - 1][j].getStatut() +
				tabCell[i + 1][j].getStatut() +
				tabCell[i + 1][j - 1].getStatut() +
				tabCell[i - 1][j - 1].getStatut() +
				tabCell[i - 1][j + 1].getStatut() +
				tabCell[i + 1][j + 1].getStatut() +
				tabCell[i][j - 1].getStatut() +
				tabCell[i][j + 1].getStatut();
/*
			if (tabCell[i][j].getStatut() == 1) { 
				if (sommeCellVoisi == 2 || sommeCellVoisi == 3) {
					tabCell[i][j].setStatutFutur(1); 
				}
				else {
					tabCell[i][j].setStatutFutur(0);
				}
			}
			else { 
				if (sommeCellVoisi == 3) {
					tabCell[i][j].setStatutFutur(1); 
				}
				else {
					tabCell[i][j].setStatutFutur(0);
				}
			}*/
		}
	}
}
void JDLV::Evolve()
{
//Compute_Next_state();
	for (int i = 0; i < height-1; i++) {
		for (int j = 0; j < width-1; j++) {
			tabCell[i][j].Evolve();
		}
	}
}