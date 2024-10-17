#include "Client.h"
#include"iostream"

// Constructeur sans paramétres
Client::Client() : id_client(0), nom_client(""), prenom_client(""), adresse_client(""), telephone("")
{}


// Constructeur avec paramètres
Client::Client(int id, string nom,  string prenom, string adresse, string telephone)
	:id_client(id), nom_client(nom),prenom_client(prenom),adresse_client(adresse),telephone(telephone)
{}


// Constructeur de copie
Client::Client(const Client& client)
    : id_client(client.id_client), nom_client(client.nom_client), prenom_client(client.prenom_client),
    adresse_client(client.adresse_client), telephone(client.telephone) {}




// Destructeur
Client::~Client()
{
    cout << "destricteur classe Client " << endl;
}


// Affiche les informations du client
void Client::afficher() const
{
    cout << "ID Client: " << id_client << endl;
    cout << "Nom: " << nom_client << endl;
    cout << "Prénom: " << prenom_client << endl;
    cout << "Adresse: " << adresse_client << endl;
    cout << "Téléphone: " << telephone << endl;

}