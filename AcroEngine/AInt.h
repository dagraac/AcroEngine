#pragma once

#include "AcroEngine.h"
#include "AVariable.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ ������ ����.
	/////////////////////////////////////////////////////////////////////////////
	class Int : public Variable
	{
	private:
		INT32 m_Value;

	public:
		Int() : Variable(), m_Value(0)
		{
		}

		virtual ~Int()
		{
		}

		VOID operator = (INT32& Value)
		{
			m_Value = Value;
		}

		operator INT32& ()
		{
			return m_Value;
		}

		INT32 ToInt()
		{
			return m_Value;
		}
	};
}