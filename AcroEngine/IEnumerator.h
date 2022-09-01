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
		virtual void Reset() = 0;
		virtual bool MoveNext() = 0;
		virtual const AObject* GetCurrent() = 0;
	};

	DECLARE_POINTER(IEnumerator)
}