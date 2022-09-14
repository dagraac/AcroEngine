#pragma once

#include "AcroEngine.h"
#include "AVariable.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �Ǽ��� ����.
	/////////////////////////////////////////////////////////////////////////////
	class IShort : public IVariable
	{
		GENERATE_TYPE(IShort)

	private:
		XPlatform::INT16 m_Value;

	public:
		IShort() : IVariable(), m_Value(0)
		{
		}

		virtual ~IShort()
		{
		}

		XPlatform::VOID operator = (XPlatform::INT16& Value)
		{
			m_Value = Value;
		}

		operator XPlatform::INT16& ()
		{
			return m_Value;
		}
	};
}