#pragma once

#include "AcroEngine.h"
#include "AVariable.h"
#include "AInt.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ 문자열형 변수.
	/////////////////////////////////////////////////////////////////////////////
	class IString : public IVariable
	{
	private:
		XPlatform::TAllocator<XPlatform::CHAR16> m_Value;

	public:
		IString()
		{
			m_Value.Reset();
		}

		IString(XPlatform::CHAR16* Value)
		{
			m_Value.Reset();
			m_Value.Resize(sizeof(Value));
			for (XPlatform::INT32 i = 0; i < m_Value.GetSize(); ++i)
			{
				m_Value.SetValue(i, Value[i]);
			}
		}

		virtual ~IString()
		{
			m_Value.Reset();
		}
	};
}