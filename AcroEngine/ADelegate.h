#pragma once

#include "AcroEngine.h"
#include "AList.h"
#include "AObject.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �Լ��븮��.
	/////////////////////////////////////////////////////////////////////////////
	class IDelegate : public IObject
	{
	private:
		AList m_Delegates;

	public:
		//static ADelegate* CreateDelegate()
		//{
		//	return nullptr;
		//}

		AcroCore::VOID Add(ADelegate Delegate)
		{
		}

		AcroCore::VOID Remove(ADelegate Delegate)
		{
		}

		AcroCore::VOID Clear()
		{
			//m_Delegates.
		}

		//AObject* Invoke(...)
		//{
		//	//for (auto delegate : m_Delegates)
		//	{

		//	}
		//}
	};
}