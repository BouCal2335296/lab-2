#pragma once
#include <iostream>
using std::cout;
#include<string>
#include "Faction.h"

using std::string;

class Vaisseau
{
	protected :
		int valeurMarchandise;
		Faction* _faction;

	protected:

		int attaque;
		int defense;
		int vie;
		int capacite;
		string nom;
		int niveau;
		int exp;
		Faction* faction;

	public:
		Vaisseau();
		Vaisseau(int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp, Faction* faction);
		Vaisseau(Faction* _faction);
		~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();

		virtual string to_string();
};

