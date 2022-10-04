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
		AcroCore::UINT32 m_Value;

	public:
		IUInt() : IVariable(), m_Value(0)
		{
		}

		virtual ~IUInt()
		{
		}

		AcroCore::VOID operator = (AcroCore::UINT32& Value)
		{
			m_Value = Value;
		}

		operator AcroCore::UINT32& ()
		{
			return m_Value;
		}
	};
}