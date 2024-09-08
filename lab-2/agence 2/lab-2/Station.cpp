#include "Station.h"
#include "Factory.h"

void Station::init() 
{
	for (int i = 0; i < 3; i++) 
	{
		vecVaisseau.push_back(Factory::getRandomVaisseau());
	}
}

std::vector<Vaisseau*> Station::getVaisseauDispo()
{
	for (Vaisseau* vaisseau : vecVaisseau)
		cout << vaisseau->to_string();
}

void Station::AjouterVaisseau(Vaisseau* vaisseau) 
{
	vecVaisseau.push_back(vaisseau);
	cout << "Le Vaisseau :\n" << vaisseau->to_string() << " à été ajouté à la liste";
}
