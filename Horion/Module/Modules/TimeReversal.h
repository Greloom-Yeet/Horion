#pragma once
#include "Module.h"
#include "../ModuleManager.h"

class TimeReversal :
	public IModule
{
private:
	int delay = 1;
	int counter = 0;
	vec3_t pos1;
	vec3_t pos2;
	vec3_t pos3;
	vec3_t pos4;
	vec3_t pos5;
public:
	TimeReversal();
	~TimeReversal();

	virtual const char* getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
	virtual void onDisable() override;
};
