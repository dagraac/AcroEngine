#pragma once

#include "AcroEngine.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �ݺ���.
	/////////////////////////////////////////////////////////////////////////////
	class IEnumerator
	{
	public:
		virtual XPlatform::VOID Reset() = 0;
		virtual XPlatform::BOOL8 MoveNext() = 0;
		virtual AObject GetCurrent() = 0;
	};
}