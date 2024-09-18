#include "Factory.h"

enum TypeVaisseau 
{
	TRANSPORT,
	LIVRAISON,
	GUERRE
};

enum ChoixFaction 
{
	ALIEN,
	PREDATOR
};

Factory::Factory() {}
Factory::~Factory() {}

Vaisseau* Factory::getRandomVaisseau() 
{
	Vaisseau* vaisseau = nullptr;

	Faction* maFaction = getRandomFaction();

	//TypeVaisseau typeV = (TypeVaisseau)::Utilitaire::genererNb(0, 3);
	TypeVaisseau typeV = TypeVaisseau(1);

	if (typeV == TypeVaisseau::GUERRE)
		vaisseau = new Guerre("Vaisseau Guerre", maFaction);

	else if (typeV == TypeVaisseau::LIVRAISON)
		vaisseau = new Transport("Vaisseau Transport",  maFaction);

	else
		vaisseau = new Livraison("Vaisseau Livraison", maFaction);

	return vaisseau;
}

Faction* Factory::getRandomFaction() 
{
	Faction* faction = nullptr;

	//ChoixFaction choixF = (ChoixFaction)::Utilitaire::genererNb(0, 2);
	ChoixFaction choixF = ChoixFaction(0);

	if (choixF == ChoixFaction::ALIEN)
		faction = new Faction(20, 20, 20, 20, "Alien");
	else
		faction = new Faction(30, 30, 30, 30, "Predator");

	return faction;
}

Vaisseau* Factory::AcheterVaisseau() 
{
	Vaisseau* vaisseau = 0;
	Faction* maFaction = getRandomFaction();

	cout << "Qu'elle vaisseau souhaitez-vous acheter ?\n";
	cout << "\n1- Vaisseau Transport";
	cout << "\n2- Vaisseau Guerre";
	cout << "\n3- Vaisseau Livraison";

	int reponse;
	cin >> reponse;

	switch (reponse) {
		
		case 1 :
			vaisseau = new Transport("Vaisseau de transport", maFaction);
			break;
		case 2 :
			vaisseau = new Guerre("Vaisseau de guerre", maFaction);
			break;
		case 3 :
			vaisseau = new Livraison("Vaisseau de livraison", maFaction);
			break;
	}
	return vaisseau;
}