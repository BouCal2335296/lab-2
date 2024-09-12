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
