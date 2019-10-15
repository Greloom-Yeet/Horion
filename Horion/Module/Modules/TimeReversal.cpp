#include "TimeReversal.h"

TimeReversal::TimeReversal() : IModule(0x0, PLAYER)
{
	this->registerIntSetting("Reverse Seconds", &this->delay, this->delay, 1, 5);
}

TimeReversal::~TimeReversal()
{
}

const char* TimeReversal::getModuleName()
{
	return ("TimeReversal");
}

void TimeReversal::onTick(C_GameMode* gm) {
	if (counter >= 20) {
		pos2 = pos1;
		pos3 = pos2;
		pos4 = pos3;
		pos5 = pos4;
		pos1 = g_Data.getLocalPlayer()->getPos();
		counter = 0;
	} else {
		counter += 1;
	}
}

void TimeReversal::onDisable() {
	if (delay = 5) {
		g_Data.getLocalPlayer()->setPos(pos5);
	}else if (delay = 4) {
		g_Data.getLocalPlayer()->setPos(pos4);
	}else if (delay = 3) {
		g_Data.getLocalPlayer()->setPos(pos3);
	}else if (delay = 2) {
		g_Data.getLocalPlayer()->setPos(pos2);
	}else if (delay = 1) {
		g_Data.getLocalPlayer()->setPos(pos1);
	}
}
