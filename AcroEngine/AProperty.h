#pragma once

#include "AcroEngine.h"
#include "AObject.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ ������Ƽ.
	/////////////////////////////////////////////////////////////////////////////
	class Property : public Object
	{
	private:
		ADelegate m_Get;
		ADelegate m_Set;

	public:
		Property() {}
		virtual ~Property() {}

		void operator += (ADelegate Delegate)
		{
			//m_Get.Add
		}
	};
}