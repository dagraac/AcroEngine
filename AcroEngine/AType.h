#pragma once

#include "AcroEngine.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ ���漱��.
	/////////////////////////////////////////////////////////////////////////////
	class AObject;
	class AString;
	class ADictionary;


	/////////////////////////////////////////////////////////////////////////////
	// @ Ŭ���� ����.
	/////////////////////////////////////////////////////////////////////////////
	class AType
	{
	private:

	public:
		AType(const XPlatform::CHAR16* className) {}
		virtual ~AType() {}

		virtual bool IsParent(AType* Class) = 0;
		virtual bool IsChildren(AType* Class) = 0;
		virtual AString GetTypeName() = 0;
		virtual ADictionary GetVariables() = 0;
		virtual ADictionary GetMethods() = 0;

		static AType* GetType(const XPlatform::CHAR16* className);
	};
}