#pragma once
#include <iostream>
using std::cout;
using std::cin;
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
		static Vaisseau* AcheterVaisseau();
		static int random(int min, int max);

	private:
		static Faction* getRandomFaction();
};

