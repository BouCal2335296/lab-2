// lab-2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using std::cout;
using std::cin;
#include "Vaisseau.h"
#include "Faction.h"

int main()
{
	Faction alien = Faction(30/*att*/, 10/*def*/, 60/*vie*/, 100/*capaciter*/, "Alien"/*Nom*/);
	Faction predator = Faction(60/*att*/, 50/*def*/, 100/*vie*/, 100/*capaciter*/, "Predator"/*Nom*/);

	Vaisseau transport = Vaisseau("transport");
	Vaisseau guerre = Vaisseau("guerre");
	Vaisseau livraison = Vaisseau("livraison");
	
	string reponse = "";
	
	cout << "Bienvenu, la chasse peu commencer";
	cin >> reponse;
}