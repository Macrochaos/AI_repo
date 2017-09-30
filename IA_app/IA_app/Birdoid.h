#pragma once
#include "GameObj.h"
#include "Vector3.h"
#include <vector>
class CBirdoid :
	public CGameObj
{
public:
	CVector3 seek(float x, float y);
	CVector3 flee(float x, float y);
	CVector3 pursue(CVector3 target, CVector3 target_dir);
	CVector3 evade(float x, float y);
	CVector3 wander(float x, float y);
	CVector3 followPath(const std::vector<CVector3> positionArray, int index);
	CVector3 obstacleAvoidance();
	CBirdoid();
	~CBirdoid();
};

