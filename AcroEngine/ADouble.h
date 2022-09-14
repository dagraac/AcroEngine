#pragma once

#include "AcroEngine.h"
#include "AVariable.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �Ǽ��� ����.
	/////////////////////////////////////////////////////////////////////////////
	class IDouble : public IVariable
	{
	private:
		XPlatform::FLOAT64 m_Value;

	public:
		XPlatform::VOID operator = (XPlatform::FLOAT64& Value)
		{
			m_Value = Value;
		}

		operator XPlatform::FLOAT64& ()
		{
			return m_Value;
		}
	};
}