#include "Station.h"
#include "Factory.h"

Station::Station() 
{
	vieStation = 100;
}
Station::~Station() {}

/// <summary>
/// Créer trois vaisseau de base 
/// </summary>
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
	return vecVaisseau;
}

void Station::AjouterVaisseau(Vaisseau* vaisseau) 
{
	vecVaisseau.push_back(vaisseau);
	cout << "Le Vaisseau :\n" << vaisseau->to_string() << " à été ajouté à la liste";
}

void Station::ToString() 
{
	cout << "\nINFORMATION STATION\nQuantite platinium : " << platiniumDisponible << "\nVie restante :" << vieStation << "\nNombre Vaisseau disponible :" << vecVaisseau.size();
}
