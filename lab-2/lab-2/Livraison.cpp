#include "Livraison.h"

Livraison::Livraison() :Vaisseau("Vaisseau Guerre") {}

Livraison::Livraison(string nom, Faction faction):Vaisseau(50, 50, 80, 0, nom, 0, 0, faction)
{
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
