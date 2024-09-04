#include "Faction.h"

Faction::Faction() :attaque(0), defense(0), vie(0), capacite(0), nom("") {}

Faction::Faction(int Att, int Def, int Vie, int Capacite, string Nom) 
{
	attaque = Att;
	defense = Def;
	vie = Vie;
	capacite = Capacite;
	nom = Nom;
}

string Faction::GetNom() 
{
	return nom;
}

int Faction::GetAtt() 
{
	return attaque;
}

int Faction::GetDef() 
{
	return defense;
}

int Faction::GetVie() 
{
	return vie;
}

int Faction::GetCapacite() 
{
	return capacite;
}