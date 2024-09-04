// lab-2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using std::cout;
using std::cin;
#include "Vaisseau.h"
#include "Faction.h"
#include "Transport.h"
#include "Livraison.h"
#include "Guerre.h"

int main()
{
	Faction alien = Faction(30/*att*/, 10/*def*/, 60/*vie*/, 100/*capaciter*/, "Alien"/*Nom*/);
	Faction predator = Faction(60/*att*/, 50/*def*/, 100/*vie*/, 100/*capaciter*/, "Predator"/*Nom*/);

	Transport transport = Transport("transport", alien);
	Guerre guerre = Guerre("guerre", alien);
	Livraison livraison = Livraison("livraison", alien);

	Transport transport1 = Transport("transport", predator);
	Guerre guerre1 = Guerre("guerre", predator);
	Livraison livraison1 = Livraison("livraison", predator);
	
	string reponse = "";
	
	cout << "Bienvenu, la chasse peu commencer";
	cin >> reponse;
}