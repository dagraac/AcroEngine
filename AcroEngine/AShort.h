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
	private:
		INT16 m_Value;

	public:
		IShort() : IVariable(), m_Value(0)
		{
		}

		virtual ~IShort()
		{
		}

		VOID operator = (INT16& Value)
		{
			m_Value = Value;
		}

		operator INT16& ()
		{
			return m_Value;
		}
	};
}