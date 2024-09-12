#pragma once
#include<string>
#include "Vaisseau.h"
#include "Utilitaire.h"
#include "Transport.h"
#include "Livraison.h"
#include "Guerre.h"
#include "Utilitaire.h"
#include <random>

using std::string;

class Factory
{
	public:
		Factory();
		~Factory();
		static Vaisseau* getRandomVaisseau();

	private:
		static Faction* getRandomFaction();
};

