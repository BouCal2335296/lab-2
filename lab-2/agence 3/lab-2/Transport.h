#pragma once
#include "Vaisseau.h"
class Transport : public Vaisseau
{
    public :
        Transport();
        Transport(string nom, Faction* faction);
        ~Transport();

        virtual string to_string();
};

