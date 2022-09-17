#pragma once

#include "AcroEngine.h"
#include "AVariable.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �����迭 ����.
	/////////////////////////////////////////////////////////////////////////////
	class IArray : public IVariable
	{
	private:
		XPlatform::BOOL8 m_Value;

	public:
		IArray() : IVariable()
		{
			m_Value = false;
		}

		virtual ~IArray()
		{
		}

		XPlatform::VOID operator = (XPlatform::BOOL8& Value)
		{
			m_Value = Value;
		}

		operator XPlatform::BOOL8& ()
		{
			return m_Value;
		}
	};
}