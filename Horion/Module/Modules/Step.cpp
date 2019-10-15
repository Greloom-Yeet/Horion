#include "Step.h"



Step::Step() : IModule('B', MOVEMENT)
{
	this->registerIntSetting("Height", &this->height, this->height, 1, 15);
}


Step::~Step()
{
}

const char* Step::getModuleName()
{
	return ("Step");
}

void Step::onTick(C_GameMode* gm) {
	if(gm->player != nullptr)
		gm->player->stepHeight = height;
}
void Step::onDisable() {
	if (g_Data.getLocalPlayer() != nullptr) 
		g_Data.getLocalPlayer()->stepHeight = 0.5625f;	
}
