#pragma once

#include "AcroEngine.h"
#include "AString.h"
#include "ADictionary.h"

namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ ���� ����.
	/////////////////////////////////////////////////////////////////////////////
	class FieldInfo : public Object
	{
	protected:
		std::wstring m_Name;

	public:
		VOID SetValue(AObject Object, INT32 Value)
		{
		}

		INT32 GetValue(AObject Object)
		{
			return 0;
		}
	};


	/////////////////////////////////////////////////////////////////////////////
	// @ �Լ� ����.
	/////////////////////////////////////////////////////////////////////////////
	class MethodInfo : public Object
	{
	protected:
		std::wstring m_Name;

	public:
		VOID Invoke(ARef<Object> Object)
		{
		}
	};


	/////////////////////////////////////////////////////////////////////////////
	// @ Ŭ���� ����.
	/////////////////////////////////////////////////////////////////////////////
	class Type : public Object
	{
	protected:
		std::wstring m_Name;
		std::vector<FieldInfo> m_Fields;
		std::vector<MethodInfo> m_Methods;

	public:
		Type() {}
		virtual ~Type() {}
		virtual BOOL8 IsParent(AType Type) = 0;
		virtual BOOL8 IsChildren(AType Type) = 0;
		virtual POINTER CreateInstance() = 0;

		const std::wstring& GetName() { return m_Name; }
		const std::vector<FieldInfo>& GetFields() { return m_Fields; }
		const std::vector<MethodInfo>& GetMethods() { return m_Methods; }			

		friend AType GetType(const CHAR16 ClassName[]);
	};
}