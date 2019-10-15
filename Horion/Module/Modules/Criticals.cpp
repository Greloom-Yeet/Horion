#include "Criticals.h"



Criticals::Criticals() : IModule(0x0, COMBAT)
{
	this->registerIntSetting("Crit Chance", &this->critChance, this->critChance, 1, 100);
}


Criticals::~Criticals()
{
}

const char* Criticals::getModuleName()
{
	return ("Criticals");
}

