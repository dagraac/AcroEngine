﻿#define XPLATFORM_WINDOWS
#include "../AcroEngine/AcroEngine.h"
#include "../AcroEngine/ABoolean.h"

using namespace XPlatform;
using namespace AcroEngine;


int main()
{
    // 생성.
    ABoolean Boolean = (ABoolean)Instantiate(A_TYPEOF(ABoolean));

    // 에러 : 아직 Type 추론 작업이 되지 않아 기본형인 AObject로 생성함.
    //*Boolean = false;

    // 파괴.
    DestroyImmediate(Boolean);
    
    return 0;
}