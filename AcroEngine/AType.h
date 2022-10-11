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
		void SetValue(AObject Object, int32 Value)
		{
		}

		int32 Get(AObject Object)
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
		void Invoke(TRef<Object> Object)
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
		virtual bool8 IsParent(AType Type) = 0;
		virtual bool8 IsChildren(AType Type) = 0;
		virtual pointer CreateInstance() = 0;

		const std::wstring& GetName() { return m_Name; }
		const std::vector<FieldInfo>& GetFields() { return m_Fields; }
		const std::vector<MethodInfo>& GetMethods() { return m_Methods; }			

		friend AType GetType(const char16 ClassName[]);
	};
}