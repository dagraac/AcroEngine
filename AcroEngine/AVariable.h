﻿#pragma once

#include "AcroEngine.h"


namespace AcroEngine
{
	class ICollection
	{
	};

	/////////////////////////////////////////////////////////////////////////////
	// @ 변수.
	/////////////////////////////////////////////////////////////////////////////
	class AVariable : public AObject
	{
		GENERATE_BASE(AObject)
		GENERATE_TYPE(AObject)

	private:
	protected:
	public:
		AVariable() : Base()
		{
		}

		void Foo() {}
	};

	/////////////////////////////////////////////////////////////////////////////
	// @ 논리형 변수.
	/////////////////////////////////////////////////////////////////////////////
	class ABoolean : public AVariable
	{
		GENERATE_BASE(AVariable)
		GENERATE_TYPE(AVariable)

	private:
		XPlatform::BOOL m_Value;

	public:
		ABoolean()
		{
			Base::Foo();
		}
	};

	/////////////////////////////////////////////////////////////////////////////
	// @ 정수형 변수.
	/////////////////////////////////////////////////////////////////////////////
	class AInt : public AVariable
	{
	private:
		XPlatform::INT32 m_Value;

	public:
		void operator = (XPlatform::INT32 value)
		{
			m_Value = value;
		}
	};

	/////////////////////////////////////////////////////////////////////////////
	// @ 정수형 변수.
	/////////////////////////////////////////////////////////////////////////////
	class AUInt : public AVariable
	{
	private:
		XPlatform::UINT32 m_Value;

	public:
		void operator = (XPlatform::UINT32 value)
		{
			m_Value = value;
		}
	};


	/////////////////////////////////////////////////////////////////////////////
	// @ 문자열형 변수.
	/////////////////////////////////////////////////////////////////////////////
	class AString : public AVariable
	{
	private:
	public:
	};


	/////////////////////////////////////////////////////////////////////////////
	// @ 문자열형 변수.
	/////////////////////////////////////////////////////////////////////////////
	class AVector2 : public AVariable
	{
	private:
		XPlatform::FLOAT64 m_X;
		XPlatform::FLOAT64 m_Y;

	public:
	};

	/////////////////////////////////////////////////////////////////////////////
	// @ 자료구조형 변수.
	/////////////////////////////////////////////////////////////////////////////
	class AContainer : public AVariable
	{
	private:

	public:
		
	};


	/////////////////////////////////////////////////////////////////////////////
	// @ 리스트 형.
	/////////////////////////////////////////////////////////////////////////////
	class AList : public AContainer
	{
	};


	/////////////////////////////////////////////////////////////////////////////
	// @ 딕셔너리 형.
	/////////////////////////////////////////////////////////////////////////////
	class ADictionary : public AContainer
	{
	};


	/////////////////////////////////////////////////////////////////////////////
	// @ 큐 형.
	/////////////////////////////////////////////////////////////////////////////
	class AQueue : public AContainer
	{
	};


	/////////////////////////////////////////////////////////////////////////////
	// @ 스택 형.
	/////////////////////////////////////////////////////////////////////////////
	class AStack : public AContainer
	{
	};
}