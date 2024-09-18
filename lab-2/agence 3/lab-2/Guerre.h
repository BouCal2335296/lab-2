#pragma once
#include "Vaisseau.h"
class Guerre : public Vaisseau
{
	public :
		Guerre();
		Guerre(string nom, Faction* faction);
		~Guerre();

		virtual string to_string();
};

