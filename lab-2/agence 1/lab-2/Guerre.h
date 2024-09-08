#pragma once
#include "Vaisseau.h"
class Guerre : public Vaisseau
{
	public :
		Guerre(string nom, Faction faction);
		Guerre();
		~Guerre();

		virtual string to_string();
};

