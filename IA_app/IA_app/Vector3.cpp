#include "stdafx.h"
#include "Vector3.h"
#include <math.h>


float CVector3::Dot( CVector3 & A, CVector3 & B)
{
	return A.m_fx*B.m_fx + A.m_fy*B.m_fy + A.m_fz*B.m_fz;
}

float CVector3::Mag( CVector3 & A)
{
	return sqrt((((A.m_fx)*(A.m_fx)) + ((A.m_fy)*(A.m_fy)) + ((A.m_fz)*(A.m_fz))));
}

CVector3 CVector3::Cross3( CVector3 & A,  CVector3 & B)
{
	CVector3 aux = { A.m_fy*B.m_fz - A.m_fz*B.m_fy, A.m_fz*B.m_fx - A.m_fx*B.m_fz, A.m_fx*B.m_fy - A.m_fy*B.m_fx };
	return aux;
}

CVector3 CVector3::Normalize()
{
	CVector3 aux = { m_fx,m_fy,m_fz };
	return aux / Mag(aux);
}

CVector3 CVector3::operator*( float f)
{
	CVector3 aux = { m_fx = m_fx*f, m_fy = m_fy*f, m_fz = m_fz*f };
	return aux;
}

CVector3 CVector3::operator*( CVector3 & B)
{
	CVector3 aux = { m_fx*B.m_fx, m_fy*B.m_fy, m_fz*B.m_fz };
	return aux;
}

CVector3 CVector3::operator-( CVector3 & punta)
{
	CVector3 result;
	result.m_fx = (punta.m_fx - m_fx);
	result.m_fy = (punta.m_fy - m_fy);
	result.m_fz = (punta.m_fz - m_fz);
	return result;
}

CVector3 CVector3::operator+( CVector3 & B)
{
	CVector3 result;
	result.m_fx = (m_fx + B.m_fx);
	result.m_fy = (m_fy + B.m_fy);
	result.m_fz = (m_fz + B.m_fz);
	return result;
}

CVector3 CVector3::operator/( float B)
{
	CVector3 aux = { m_fx = m_fx / B, m_fy = m_fy / B, m_fz = m_fz / B };
	return aux;
}

CVector3::CVector3()
{
}

CVector3::CVector3(float x, float y, float z)
{
	CVector3 aux; aux.m_fx = x; aux.m_fy = y; aux.m_fz = z;
}


CVector3::~CVector3()
{
}
