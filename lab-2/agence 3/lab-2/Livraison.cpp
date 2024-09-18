#include "Livraison.h"

Livraison::Livraison() :Vaisseau() 
{
	nom = "Vaisseau Livraison NULL";
}

Livraison::Livraison(string nom, Faction* _faction):Vaisseau(30, 50, 100, 100, nom, 0, 0, _faction)
{
	attaque += faction->GetAtt();
	defense += faction->GetDef();
	vie += faction->GetVie();
	capacite += faction->GetCapacite();
	nom += faction->GetNom();
}

Livraison::~Livraison() 
{
}

string Livraison::to_string()
{
	string message = Vaisseau::to_string();

	message.append("\nJe suis une vaisseau de Livraison\n");
	return message;
}
