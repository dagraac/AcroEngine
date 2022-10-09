#pragma once

#include "AcroEngine.h"
#include "AVariable.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ ������ ����.
	/////////////////////////////////////////////////////////////////////////////
	class UInt : public Variable
	{
	private:
		UINT32 m_Value;

	public:
		UInt() : Variable(), m_Value(0)
		{
		}

		virtual ~UInt()
		{
		}

		VOID operator = (UINT32& Value)
		{
			m_Value = Value;
		}

		operator UINT32& ()
		{
			return m_Value;
		}

		UINT32 ToUInt()
		{
			return m_Value;
		}
	};
}