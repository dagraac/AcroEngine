#pragma once

#include "AcroEngine.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �⺻ �ڷᱸ��.
	/////////////////////////////////////////////////////////////////////////////
	class ICollection
	{
	public:
		virtual int GetCount() = 0;

		virtual XPlatform::VOID Add(AObject Object) = 0;
		virtual XPlatform::VOID Remove(AObject Object) = 0;
		virtual XPlatform::VOID Reset() = 0;

		virtual XPlatform::BOOL8 Contains(AObject Object) = 0;
		virtual XPlatform::VOID CopyTo(AObject Array, AInt Index) = 0;
	};
}