#pragma once

#include "AcroEngine.h"
#include "AVariable.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �Ǽ��� ����.
	/////////////////////////////////////////////////////////////////////////////
	class IFloat : public IVariable
	{
	private:
		XPlatform::FLOAT32 m_Value;

	public:
		XPlatform::VOID operator = (XPlatform::FLOAT32& Value)
		{
			m_Value = Value;
		}

		operator XPlatform::FLOAT32& ()
		{
			return m_Value;
		}
	};
}