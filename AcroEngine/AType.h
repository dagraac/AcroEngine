#pragma once

#include "AcroEngine.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ Ŭ���� ����.
	/////////////////////////////////////////////////////////////////////////////
	class IType
	{
	private:
	public:
		IType(const XPlatform::CHAR16 ClassName[]) {}
		virtual ~IType() {}

		virtual XPlatform::BOOL8 IsParent(AType Class) { return false; }
		virtual XPlatform::BOOL8 IsChildren(AType Class) { return false; }
		virtual AString GetTypeName() { return nullptr; }
		virtual ADictionary GetVariables() { return nullptr; }
		virtual ADictionary GetMethods() { return nullptr; }

		friend AType GetType(const XPlatform::CHAR16 ClassName[]);
	};
}