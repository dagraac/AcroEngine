#pragma once

#define XPLATFORM_WINDOWS
#include "../XPlatform/XPlatform.h"


namespace AcroEngine
{
	/*
		Ư¡: ���ø�����. �ʴܼ�����. �ʰ淮. �Ϻ��ѸŴ�����. C++�� C# ������ ��ȭ. ��Ƽ�÷�������. �ǽð�Ÿ����������. ��������Ʈ �ø�������� ����.
	*/

	//class AAudio {};
	//class AVideo {};
	//class AAppication {};
	//class AFile {};
	//class ANetwork {};
	//class AInput {};
	//class AUI {};
	//class AData {};
	//class ASerializer {};

	//template<typename T = class AObject> class Json
	//{
	//public:
	//	static AString Serialize(const T* object) {}
	//	static T Deserialize(const AString& string) {}
	//};

	//class AScript {};

	static void LoadAssembly();
	static void UnloadAssembly();
}