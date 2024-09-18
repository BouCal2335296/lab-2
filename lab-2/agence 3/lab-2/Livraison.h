#pragma once
#include "Vaisseau.h"
class Livraison :public Vaisseau
{
	public :
		Livraison();
		Livraison(string nom, Faction* faction);
		~Livraison();

		virtual string to_string();
};

