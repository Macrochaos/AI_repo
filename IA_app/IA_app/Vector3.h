#pragma once
class CVector3
{
public:
	union
	{
		struct { float m_fx, m_fy, m_fz; };
		float m_f_vecArray[3];
		int m_i_vecArray[3];

	};
	static const CVector3 ZERO;
	static const CVector3 UNIT;
	//const CVector3 ZERO(0, 0, 0);

	float Dot( CVector3& A, CVector3& B);
	float Mag( CVector3& A);
	CVector3 Cross3( CVector3& A,  CVector3& B);
	CVector3 Normalize();

	CVector3 operator*( float f);
	CVector3 operator*( CVector3& B);
	CVector3 operator-( CVector3& punta);
	CVector3 operator+( CVector3& B);
	CVector3 operator/( float B);

	CVector3();
	CVector3(float x, float y, float z);
	~CVector3();
};

