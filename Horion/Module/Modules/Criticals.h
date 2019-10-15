#pragma once
#include "Module.h"
class Criticals :
	public IModule
{
private:
	float critChance = 100;
	
public:
	Criticals();
	~Criticals();

	inline int getCritChance() { return critChance; };

	// Inherited via IModule
	virtual const char* getModuleName() override;
};
