#pragma once

#include "AcroEngine.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ ������Ƽ.
	/////////////////////////////////////////////////////////////////////////////
	class AProperty
	{
	private:
		ADelegate m_Get;
		ADelegate m_Set;

	public:
		AProperty() {}
		virtual ~AProperty() {}

		void operator += (ADelegate Delegate)
		{
			//m_Get.Add
		}
	};
}