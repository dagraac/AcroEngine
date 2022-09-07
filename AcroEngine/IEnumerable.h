#pragma once

#include "AcroEngine.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �ݺ���.
	/////////////////////////////////////////////////////////////////////////////
	class IEnumerable
	{
	public:
		virtual const IEnumerator* GetEnumerator() = 0;
	};
}