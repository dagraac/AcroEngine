#pragma once

#include "AcroEngine.h"
#include "AList.h"
#include "AObject.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �Լ��븮��.
	/////////////////////////////////////////////////////////////////////////////
	class Delegate : public Object
	{
	private:
		AList m_Delegates;

	public:
		//static Delegate* CreateDelegate()
		//{
		//	return nullptr;
		//}

		void Add(Delegate Delegate)
		{
		}

		void Remove(Delegate Delegate)
		{
		}

		void Clear()
		{
			m_Delegates->Clear();
		}

		//ARef* Invoke(...)
		//{
		//	//for (auto delegate : m_Delegates)
		//	{

		//	}
		//}
	};
}