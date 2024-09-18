#include "Transport.h"

Transport::Transport() :Vaisseau() 
{
	nom = "Vaisseau de Transport NULL";
}

Transport::Transport(string nom, Faction* _faction) :Vaisseau(0, 50, 100, 200, nom, 0, 0, _faction)
{
	attaque += faction->GetAtt();
	defense += faction->GetDef();
	vie += faction->GetVie();
	capacite += faction->GetCapacite();
	nom += faction->GetNom();
}
Transport::~Transport() 
{
}

string Transport::to_string() 
{
	string message = Vaisseau::to_string();

	message.append("\nJe suis une vaisseau de Transport\n");
	return message;
}
