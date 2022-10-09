#pragma once

#include "AcroEngine.h"
#include "AVariable.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �Ǽ��� ����.
	/////////////////////////////////////////////////////////////////////////////
	class Short : public Variable
	{
	private:
		INT16 m_Value;

	public:
		Short() : Variable(), m_Value(0)
		{
		}

		virtual ~Short()
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