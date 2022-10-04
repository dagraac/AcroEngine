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

		virtual AcroCore::VOID Add(AObject Object) = 0;
		virtual AcroCore::VOID Remove(AObject Object) = 0;
		virtual AcroCore::VOID Clear() = 0;

		virtual AcroCore::BOOL8 Contains(AObject Object) = 0;
		virtual AcroCore::VOID CopyTo(AObject Array, AInt Index) = 0;
	};
}