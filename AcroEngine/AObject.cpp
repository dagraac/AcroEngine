﻿#include "AObject.h"
#include "AVariable.h"
#include "AClassGenerated.h"


/////////////////////////////////////////////////////////////////////////////
// @
/////////////////////////////////////////////////////////////////////////////
AcroEngine::AObject::AObject()
{
    m_ID = 0;
    m_ReferenceCount = 0;
}

/////////////////////////////////////////////////////////////////////////////
// @
/////////////////////////////////////////////////////////////////////////////
AcroEngine::AObject::~AObject()
{

}

/////////////////////////////////////////////////////////////////////////////
// @
/////////////////////////////////////////////////////////////////////////////
void AcroEngine::AObject::IncreaseReference(AObject* Object)
{
    if (Object != nullptr)
    {
        ++Object->m_ReferenceCount;
    }
}

/////////////////////////////////////////////////////////////////////////////
// @
/////////////////////////////////////////////////////////////////////////////
void AcroEngine::AObject::DecreaseReference(AObject** Object)
{
    if ((*Object) != nullptr)
    {
        --(*Object)->m_ReferenceCount;

        if ((*Object)->m_ReferenceCount <= 0)
        {
            delete (*Object);
            Object = nullptr;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////
// @
/////////////////////////////////////////////////////////////////////////////
AcroEngine::AString AcroEngine::AObject::ToString()
{
    return AString();
}

/////////////////////////////////////////////////////////////////////////////
// @
/////////////////////////////////////////////////////////////////////////////
AcroEngine::AObject* AcroEngine::AObject::Instantiate(AcroEngine::AType* Class)
{
    return nullptr;
}

/////////////////////////////////////////////////////////////////////////////
// @
/////////////////////////////////////////////////////////////////////////////
void AcroEngine::AObject::Destroy(AcroEngine::AObject* Object)
{

}

/////////////////////////////////////////////////////////////////////////////
// @
/////////////////////////////////////////////////////////////////////////////
AcroEngine::AType* AcroEngine::AObject::GetType()
{
    AClassGenerated::GetClassName();
    return nullptr;
}