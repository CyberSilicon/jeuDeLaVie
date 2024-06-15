#include "Cell.hpp"



class JDLV {
private: 
	Cell **tabCell;
	int height;
	int width;
public:
	JDLV();
	JDLV(int h, int w);
	//getters
	//Cell** getCell() { return tabCell; };
	Cell& getCell(int x, int y);
	int getHeight() const { return height; };
	int getWidth() const { return width; };
	//setters
	void setHeight(int h) { height = h; };
	void setWidth(int w) { width = w; };
	//functions
	void Affiche();
	void Initialise();
	void Evolve();
	void Compute_Next_state();
};