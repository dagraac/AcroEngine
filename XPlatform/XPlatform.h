#pragma once


namespace XPlatform
{
	// Desktop.
	//#define XPLATFORM_WINDOWS // Base WindowsAPI
	//#define XPLATFORM_MAC // Base CocoaFramework

	// Mobile.
	//#define XPLATFORM_ANDROID // Base AndroidNDK
	//#define XPLATFORM_IOS // Base CocoaFramework

	// Console.
	//#define XPLATFORM_SWITCH
	//#define XPLATFORM_PS5
	//#define XPLATFORM_XBOXSX

	#define INVALID -1
	#define TEXT(Text) L#Text

#if defined(XPLATFORM_WINDOWS) // WINDOWS
	typedef void VOID;
	typedef signed char INT8;
	typedef unsigned char UINT8;
	typedef signed short INT16;
	typedef unsigned short UINT16;
	typedef signed int INT32;
	typedef unsigned int UINT32;
	typedef bool BOOL8;
	typedef float FLOAT32;
	typedef double FLOAT64;
	typedef wchar_t CHAR16;
	
#elif defined(XPLATFORM_MAC) // MAC
	typedef void VOID;
	typedef signed char INT8;
	typedef unsigned char UINT8;
	typedef signed short INT16;
	typedef unsigned short UINT16;
	typedef signed int INT32;
	typedef unsigned int UINT32;
	typedef bool BOOL8;
	typedef float FLOAT32;
	typedef double FLOAT64;
	typedef wchar_t CHAR16;

#elif defined(XPLATFORM_ANDROID) // ANDORID
	typedef void VOID;
	typedef signed char INT8;
	typedef unsigned char UINT8;
	typedef signed short INT16;
	typedef unsigned short UINT16;
	typedef signed int INT32;
	typedef unsigned int UINT32;
	typedef bool BOOL8;
	typedef float FLOAT32;
	typedef double FLOAT64;
	typedef wchar_t CHAR16;

#elif defined(XPLATFORM_IOS) // IOS
	typedef void VOID;
	typedef signed char INT8;
	typedef unsigned char UINT8;
	typedef signed short INT16;
	typedef unsigned short UINT16;
	typedef signed int INT32;
	typedef unsigned int UINT32;
	typedef bool BOOL8;
	typedef float FLOAT32;
	typedef double FLOAT64;
	typedef wchar_t CHAR16;

#else // EDITOR
	typedef void VOID;
	typedef signed char INT8;
	typedef unsigned char UINT8;
	typedef signed short INT16;
	typedef unsigned short UINT16;
	typedef signed int INT32;
	typedef unsigned int UINT32;
	typedef bool BOOL8;
	typedef float FLOAT32;
	typedef double FLOAT64;
	typedef wchar_t CHAR16;

#endif
	/////////////////////////////////////////////////////////////////////////////
	// @ �޸� �Լ� ���.
	/////////////////////////////////////////////////////////////////////////////
	VOID* XMemoryCreate(UINT32 Length);
	VOID XMemoryDelete(VOID* Pointer);
	VOID XMemoryFill(VOID* Source, UINT8 Value, UINT32 Length);


	/////////////////////////////////////////////////////////////////////////////
	// @ ���ø����̼� �Լ� ���.
	/////////////////////////////////////////////////////////////////////////////
	VOID XApplicationCreate();
	VOID XApplicationDestroy();
	

	/////////////////////////////////////////////////////////////////////////////
	// @ ���� �Լ� ���.
	/////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////
	// @ ��Ʈ��ũ �Լ� ���.
	/////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////
	// @ �Է� �Լ� ���.
	/////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////
	// @ ���� �Լ� ���.
	/////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////
	// @ ������ �Լ� ���.
	/////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////
	// @ ��Ÿ �Լ� ���.
	/////////////////////////////////////////////////////////////////////////////


}