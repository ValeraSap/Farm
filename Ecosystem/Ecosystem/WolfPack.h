#pragma once
#if !defined(__FarmClassDiagram_WolfPack_h)
#define __FarmClassDiagram_WolfPack_h

//class Wolf;
//class WolfHuntStrategy;

#include "Wolf.h"
#include "WolfHuntStrategy.h"

class WolfPack
{
public:
	WolfPack();
	~WolfPack();

	Wolf** wolf= nullptr;
	WolfHuntStrategy** wolfHuntStrategy= nullptr;

protected:
private:
	Wolf* alphaMale = nullptr;
	Wolf* alphaFemale = nullptr;
	Wolf* betas = nullptr;
	int territory;
	WolfHuntStrategy* wolfHuntStrategy= nullptr;


};

#endif
