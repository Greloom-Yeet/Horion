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

void AutoTotem::onTick(C_GameMode* gm) {

}
