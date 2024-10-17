#include<iostream>
#include"Compte.h"
using namespace std;


int main()
{
	Client* client1 = new Client(1, "Ait lahcen","Sana","sana@gmail.com","0663");

	Compte C(1,client1, 1200, "courant");
	Compte* C1= new Compte(1,client1, 3200, "épargne");

	C.afficher();
	cout << endl;

	C.depot(500);
	C.afficher();
	cout << endl;

	//transfert de Compte C vers Compte C1
	C.transfert(*C1, 400);
	C.afficher();
	cout << endl;

	C1->afficher();
	
	delete C1;
	
	delete client1;
	

	return 0;
}