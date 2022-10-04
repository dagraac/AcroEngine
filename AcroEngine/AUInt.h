#pragma once

#include "AcroEngine.h"
#include "AVariable.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ ������ ����.
	/////////////////////////////////////////////////////////////////////////////
	class IUInt : public IVariable
	{
	private:
		UINT32 m_Value;

	public:
		IUInt() : IVariable(), m_Value(0)
		{
		}

		virtual ~IUInt()
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