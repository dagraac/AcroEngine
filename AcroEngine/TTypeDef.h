#pragma once


#include "AcroEngine.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ Ÿ�� ����.
	/////////////////////////////////////////////////////////////////////////////
	template<typename T = Object> class TTypeDef : public Type
	{
	public:
		TTypeDef() : Type(AcroCore::GetTypeName<T>()) { }
		virtual pointer CreateInstance() override { return new T(); }
	};
}