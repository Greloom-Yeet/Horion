#include "BugUp.h"



BugUp::BugUp() : IModule(0x0, MOVEMENT)
{
	registerIntSetting("distance", &this->distance, this->distance, 1, 20);
}


BugUp::~BugUp()
{
}

const char* BugUp::getModuleName()
{
	return ("BugUp");
}

void BugUp::onTick(C_GameMode* gm) {

	C_LocalPlayer* player = g_Data.getLocalPlayer();
	vec3_t blockBelow = player->eyePos0;
	blockBelow.y -= player->height;
	blockBelow.y -= 0.5f;

	if ((*(player->region->getBlock(blockBelow)->blockLegacy))->blockId != 0 && (*(player->region->getBlock(blockBelow)->blockLegacy))->material->isSolid)
	{
		savepos = blockBelow;
		savepos.y += player->height;
		savepos.y += 0.5f;
	}

	if (player->fallDistance >= distance)
	{
		player->setPos(savepos);
	}

}