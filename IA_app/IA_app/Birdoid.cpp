#include "stdafx.h"
#include "Birdoid.h"

#define PI 3.141592.0f
#define SEEK_SPEED 5.0f
#define PURSUE_SPEED 5.0f
#define INIT_PURSUE_RADIUS 10.0f
#define FLEE_RADIUS 10.0f
#define WANDER_RADIUS 10.0f

#define VELOCITY 5.0f

CVector3 CBirdoid::seek(float x, float y){
	CVector3 DIR = { x - m_vec3_pos.m_fx, y - m_vec3_pos.m_fy, m_vec3_pos.m_fz};
	return (DIR.Normalize())* SEEK_SPEED;
}

CVector3 CBirdoid::flee(float x, float y){
	CVector3 DIR = { x - m_vec3_pos.m_fx, y - m_vec3_pos.m_fy, m_vec3_pos.m_fz };
	CVector3 aux = DIR;
	if (aux.Mag(aux) <= FLEE_RADIUS) 
		return (DIR.Normalize())* -SEEK_SPEED;
}

CVector3 CBirdoid::pursue(CVector3 target, CVector3 target_dir){
	float new_radius = INIT_PURSUE_RADIUS;
	CVector3 PREDICTED_POS = target_dir.Normalize()*new_radius;
	CVector3 DIR = { target_dir.m_fx - m_vec3_pos.m_fx, target_dir.m_fy - m_vec3_pos.m_fy, m_vec3_pos.m_fz };
	if (DIR.Mag(DIR) <= new_radius) {
		new_radius = DIR.Mag(DIR);
		return (DIR.Normalize())*new_radius;
	}
	else 
		return seek(target.m_fx, target.m_fy);
}

CVector3 CBirdoid::evade(float x, float y){
	return CVector3();
}

CVector3 CBirdoid::wander(float x, float y){
	return CVector3();
}

CVector3 CBirdoid::followPath(const std::vector<CVector3> pathArray, int index){
	static int 
	return CVector3();
}

CBirdoid::CBirdoid(){

}


CBirdoid::~CBirdoid(){

}
