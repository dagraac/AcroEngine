#pragma once

#include "AcroEngine.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ ������Ƽ.
	/////////////////////////////////////////////////////////////////////////////
	class IProperty
	{
	private:
		ADelegate m_Get;
		ADelegate m_Set;

	public:
		IProperty() {}
		virtual ~IProperty() {}

		XPlatform::VOID operator += (ADelegate Delegate)
		{
			//m_Get.Add
		}
	};
}