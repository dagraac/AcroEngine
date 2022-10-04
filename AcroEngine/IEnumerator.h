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
		virtual AcroCore::VOID Clear() = 0;
		virtual AcroCore::BOOL8 MoveNext() = 0;
		virtual AObject GetCurrent() = 0;
	};
}