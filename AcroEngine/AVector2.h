#pragma once

#include "AcroEngine.h"
#include "AVariable.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ 이차원 벡터 변수.
	/////////////////////////////////////////////////////////////////////////////
	class Vector2 : public Variable
	{
	private:
		float64 m_Values[2];

	public:
	};
}