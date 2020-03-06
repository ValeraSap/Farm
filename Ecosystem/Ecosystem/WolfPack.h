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

	Wolf** wolf;
	WolfHuntStrategy** wolfHuntStrategy;

protected:
private:
	Wolf alphaMale;
	Wolf alphaFemale;
	Wolf betas;
	int territory;
	WolfHuntStrategy wolfHuntStrategy;


};

#endif
