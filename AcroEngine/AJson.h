#pragma once

#include "AcroEngine.h"


namespace AcroEngine
{
	/////////////////////////////////////////////////////////////////////////////
	// @ Ŭ���� ����.
	/////////////////////////////////////////////////////////////////////////////
	class AJson : public AObject
	{
	private:

	public:
		AJson() {}
		virtual ~AJson() {}

		static AObject* Deserialize(AString* String);
		static AString Serialize(AObject* Object);
	};
}