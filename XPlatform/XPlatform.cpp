#include "XPlatform.h"

//#include "C:\\Users\\dagraac\\AppData\\Local\\Android\\Sdk\\ndk\\21.4.7075529\\sources\\android\\"

namespace XPlatform
{
#if defined(XPLATFORM_WINDOWS)
#elif defined(XPLATFORM_ANDROID)
#elif defined(XPLATFORM_IOS)
#else // ENGINE
#endif

// APPLICATION MAIN.
#if defined(XPLATFORM_WINDOWS)
	void main(wchar_t argv[], int argc)
	{

	}
#elif defined(XPLATFORM_ANDROID)
#include <EGL/egl.h>
#include <GLES/gl.h>
	void android_main(android_app* state)
	{

	}
#elif defined(XPLATFORM_IOS)
#else // ENGINE
#endif



	/////////////////////////////////////////////////////////////////////////////
	// @ �޸� ����.
	/////////////////////////////////////////////////////////////////////////////
	VOID* XMemoryCreate(UINT32 Length)
	{
		return new UINT8[Length];
	}


	/////////////////////////////////////////////////////////////////////////////
	// @ �޸� ����.
	/////////////////////////////////////////////////////////////////////////////
	VOID XMemoryDelete(VOID* Pointer)
	{
		if (Pointer != nullptr)
		{
			delete[](Pointer);
		}
	}


	/////////////////////////////////////////////////////////////////////////////
	// @ �޸� �� ä���.
	/////////////////////////////////////////////////////////////////////////////
	VOID XMemoryFill(VOID* Source, UINT8 Value, UINT32 Length)
	{
		return;

		UINT8* temp = (UINT8*)Source;
		for (UINT32 Index = 0; Index < Length; ++Index)
		{
			temp[Index] = Value;
		}
	}
}