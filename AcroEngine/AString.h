#pragma once

#include "AcroEngine.h"
#include "AVariable.h"
#include "AInt.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ ���ڿ��� ����.
	/////////////////////////////////////////////////////////////////////////////
	class IString : public IVariable
	{
	private:
		std::wstring m_Data;

	public:
		IString()
		{
			m_Data.clear();
		}

		IString(CHAR16* Value)
		{
			m_Data += Value;
		}

		virtual ~IString()
		{
			m_Data.clear();
		}
	};
}