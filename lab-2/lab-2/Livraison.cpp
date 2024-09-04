#include "Livraison.h"

Livraison::Livraison() :Vaisseau("Vaisseau Livraison") {}

Livraison::Livraison(string nom, Faction faction):Vaisseau(50, 50, 80, 0, nom, 0, 0, faction)
{
	attaque += faction.GetAtt();
	defense += faction.GetDef();
	vie += faction.GetVie();
	capacite += faction.GetCapacite();
	nom += faction.GetNom();
}

Livraison::~Livraison() 
{
}

string Livraison::to_string()
{
	string message = Vaisseau::to_string();

	message.append("Je suis une vaisseau de Livraison");
	return message;
}
