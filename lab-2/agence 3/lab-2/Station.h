#pragma once
#include <vector>
#include "Vaisseau.h"

class Station
{
	private :
		int platiniumDisponible;
		int vieStation;
		std::vector<Vaisseau*> vecVaisseau;

	public :
		Station();
		~Station();

		std::vector<Vaisseau*> getVaisseauDispo();
		void init();
		void AjouterVaisseau(Vaisseau* vaisseau);
		void ToString();
};

