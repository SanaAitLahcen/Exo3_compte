#pragma once
#include<string>
#include"Client.h"
using namespace std;

class Compte
{
private:
	int id_compte;
	Client* Cl;
	double solde;
	string typeCompte; //soit Epargne soit courant 

public:
	Compte();
	Compte(int,Client* , double, string);
	Compte(const Compte&);
	~Compte();
	void afficher() const;
	void depot(double montant);
	void retrait(double montant);
	void transfert(Compte& C, double montant);

};

