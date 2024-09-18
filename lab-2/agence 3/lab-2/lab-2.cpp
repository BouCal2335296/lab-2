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
#include "Station.h"

int main()
{
	auto reponse = 0;

	Factory factory = Factory();
	srand(time(NULL));
	cout << "... production d'un vaisseau";
	Station station = Station();
	station.init();
	Vaisseau* vaisseau1 = factory.getRandomVaisseau();
	cout << vaisseau1->to_string();
	

	do 
	{
		std::cout << R"(
         _ 
        [_\              
        ]  \-                     
   [\ __]...\..,__       
  <--{__    ( )()_ >     
   [/   ]'''/''"         
        ]_ /-                 
        [_/
    )";
		cout << "Menu Principale\n";
		cout << "1 - Afficher les information de la station\n";
		cout << "2 - Voir la liste de vaisseaux disponible dans la station\n";
		cout << "3 - Acheter un vaisseau\n";

		cout << "\n Selection : ";
		cin >> reponse;

		switch (reponse) {

			case 1 :
				station.ToString();
				break;
			case 2 :
				station.getVaisseauDispo();
				break;
			case 3 :
				Vaisseau * vaisseau = factory.AcheterVaisseau();
				station.AjouterVaisseau(vaisseau);
				break;
		};
	} while (reponse != 4);
}