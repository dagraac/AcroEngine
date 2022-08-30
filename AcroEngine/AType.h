#pragma once

#include "AcroEngine.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ Ŭ���� ����.
	/////////////////////////////////////////////////////////////////////////////
	class AType
	{
	private:

	public:
		AType(const AString* className) {}
		virtual ~AType() {}

		virtual bool IsParent(AType* Class) = 0;
		virtual bool IsChildren(AType* Class) = 0;
		virtual AString GetClassName() = 0;
		virtual ADictionary GetVariables() = 0;
		virtual ADictionary GetMethods() = 0;
	};
}