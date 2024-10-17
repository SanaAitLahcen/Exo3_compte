#include "Compte.h"
#include"Client.h"
#include<iostream>



// Constructeur sans paramétres
Compte::Compte(): id_compte(0), Cl(nullptr), solde(0.0), typeCompte("Courant")
{}

//constructeur avec paramétres
Compte::Compte(int num,Client* C1, double solde, string type) :id_compte(num), Cl(C1), solde(solde), typeCompte(type)
{}




//constructeur de copie
Compte::Compte(const Compte& autre)
	: id_compte(autre.id_compte), Cl(autre.Cl), solde(autre.solde), typeCompte(autre.typeCompte) 
{}



// Destructeur
Compte::~Compte()
{
	cout << "destricteur compte " << endl;
}



//Méthode affiche le compte et client 
void Compte::afficher() const
{
	
		cout << "Compte ID : " << this->id_compte << endl;
		cout << "Solde : " << this->solde << "DH" << endl;
		cout << "Type de compte : " << this->typeCompte << endl;
		cout << "Infos client : " << endl;
		this->Cl->afficher();
	
}



void Compte::depot(double montant)
{
	if (montant > 0)
	{
		this->solde += montant;

		if (typeCompte == "épargne")
		{
			// Ajouter un intérét de 2% pour le compte épargne
			this->solde += montant * 0.02;
			cout << "Intérét ajouté  sur le compte épargne " << endl;
		}

		cout << "Dépot effectué avec succés" << endl;
	}
	else
		cout << "Le montant doit etre positif" << endl;
}



void Compte::retrait(double montant)
{
	if (montant > 0 && this->solde >= montant)
	{
		this->solde -= montant;
		cout << "Retrait effectué avec succés " << endl;
	}
	else
		cout << "solde insuffisant " << endl;

}



void Compte::transfert(Compte& C, double montant)
{
	if (montant > 0 && this->solde >= montant)
	{
		this->solde -= montant;
		C.solde += montant;
		cout << "Transfert effectué avec succés " << endl;
	}
	else
		cout << "Transfert impossible : solde insuffisant ou montant invalide " << endl;

}
