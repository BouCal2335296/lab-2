#include "Vaisseau.h"

Vaisseau::Vaisseau()
{
	attaque = 0;
	defense = 0;
	vie = 0;
	capacite = 0;
	niveau = 0;
	exp = 0;
}

Vaisseau::Vaisseau(int Attaque, int Defense, int Vie, int Capacite, string Nom, int Niveau, int Exp, Faction* faction)
{
	valeurMarchandise = 0;
	attaque = Attaque;
	defense = Defense;
	vie = Vie;
	capacite = Capacite;
	nom = Nom;
	niveau = Niveau;
	exp = Exp;
}

Vaisseau::Vaisseau(Faction* faction) 
{
	_faction = faction;
}

Vaisseau::~Vaisseau() 
{

}

int Vaisseau::getAtt()
{
	return attaque;
}

int Vaisseau::getDef()
{
	return defense;
}

int Vaisseau::getVie()
{
	return vie;
}

string Vaisseau::to_string() 
{
	string message = "";
	message.append("\nNom : " + nom + "\nAttaque : " + std::to_string(attaque) + "\nDefense : " + std::to_string(defense) + "\nVie : " + std::to_string(vie) + "\nCapacite : " + std::to_string(capacite));
	return message;
}