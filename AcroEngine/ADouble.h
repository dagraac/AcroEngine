#pragma once

#include "AcroEngine.h"
#include "AVariable.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �Ǽ��� ����.
	/////////////////////////////////////////////////////////////////////////////
	class Double : public Variable
	{
	private:
		float64 m_Value;

	public:
		void operator = (float64& Value)
		{
			m_Value = Value;
		}

		operator float64& ()
		{
			return m_Value;
		}
	};
}