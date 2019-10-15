#pragma once
#include "Module.h"
#include "../ModuleManager.h"

class TimeReversal : public IModule
{
private:
	int delay = 1;
public:
	TimeReversal();
	~TimeReversal();

	virtual const char* getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
	virtual void onEnable() override;
};
