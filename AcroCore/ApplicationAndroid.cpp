﻿#include "AcroCore.h"

#ifdef ACROCORE_ANDROID
#include <EGL/egl.h>
#include <GLES/gl.h>
//#include "C:\\Users\\dagraac\\AppData\\Local\\Android\\Sdk\\ndk\\21.4.7075529\\sources\\android\\"


namespace AcroCore
{
	void android_main(android_app* state)
	{
	}


	/////////////////////////////////////////////////////////////////////////////
	// @ 어플리케이션 실행.
	/////////////////////////////////////////////////////////////////////////////
	VOID RunApplication(const IApplicationListnener& application)
	{
	}

	/////////////////////////////////////////////////////////////////////////////
	// @ 어플리케이션 종료.
	/////////////////////////////////////////////////////////////////////////////
	VOID QuitApplication()
	{
	}
}

#endif