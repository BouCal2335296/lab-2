#include "Transport.h"

Transport::Transport() :Vaisseau("Vaisseau Transport") {}

Transport::Transport(string nom, Faction faction) :Vaisseau(50, 50, 80, 0, nom, 0, 0, faction)
{
	attaque += faction.GetAtt();
	defense += faction.GetDef();
	vie += faction.GetVie();
	capacite += faction.GetCapacite();
	nom += faction.GetNom();
}
Transport::~Transport() 
{
}

string Transport::to_string() 
{
	string message = Vaisseau::to_string();

	message.append("Je suis une vaisseau de Transport");
	return message;
}
