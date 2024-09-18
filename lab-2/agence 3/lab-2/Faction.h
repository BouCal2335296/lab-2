#pragma once
#include "Utilitaire.h"
#include<string>

using std::string;

class Faction
{
	protected :

		int attaque;
		int defense;
		int vie;
		int capacite;
		string nom;

	public:

		Faction();
		Faction(int att, int def, int vie, int capacite, string nom);

		string GetNom();
		int GetAtt();
		int GetDef();
		int GetVie();
		int GetCapacite();
};

