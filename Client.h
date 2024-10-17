#pragma once
#include<string>
using namespace std;



class Client
{
private:
    int id_client;
    string nom_client;
    string prenom_client;
    string adresse_client;
    string telephone;

public:
    // Constructeurs
    Client();
    Client(int id,  string nom, string prenom, string adresse, string telephone);
    Client(const Client& client);

    // Destructeur
    ~Client();

    // Méthodes
    void afficher() const; // Affiche les informations du client

};