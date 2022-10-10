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

		virtual void Add(ARef Object) = 0;
		virtual void Remove(ARef Object) = 0;
		virtual void Clear() = 0;

		virtual bool8 Contains(ARef Object) = 0;
		virtual void CopyTo(ARef Array, Int Index) = 0;
	};
}