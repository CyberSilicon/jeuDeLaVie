

class Cell {
private:
	bool statut;
	bool statut_futur;
public:
	Cell() : statut(0), statut_futur(0) {};
	Cell(bool s) :statut(s) {};

	//getters 
	bool getStatut() { return statut; };
	bool getStatutFutur() { return statut_futur; };
	//setters
	void setStatut(bool s) { statut = s; };
	void setStatutFutur(bool sf) { statut_futur = sf; };
	//fonctions
	void Affiche();
	bool Evolve();
};