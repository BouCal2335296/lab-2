// lab-2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
#include "Vaisseau.h"
#include "Faction.h"
#include "Transport.h"
#include "Livraison.h"
#include "Guerre.h"
#include "Factory.h"

int main()
{
	Factory factory = Factory();

	srand(time(NULL));
	cout << "... production d'un vaisseau";
	Vaisseau* vaisseau1 = factory.getRandomVaisseau();
	cout << vaisseau1->to_string();
	
	string reponse = "";
}