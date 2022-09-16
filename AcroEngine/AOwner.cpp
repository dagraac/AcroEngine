#include "AOwner.h"


namespace AcroEngine
{
	IOwner::IOwner()
	{
		m_Target = nullptr;
	}

	IOwner::IOwner(AObject target)
	{
		m_Target = nullptr;
		SetOwner(target);
	}

	IOwner::IOwner(AOwner Owner)
	{
		m_Target = nullptr;
		SetOwner(Owner->m_Target);
	}

	IOwner::~IOwner()
	{
		UnsetOwner();
	}

	XPlatform::VOID IOwner::SetOwner(AObject target)
	{
		UnsetOwner();

		if (target != nullptr)
		{
			m_Target = const_cast<AObject>(target);
			IObject::IncreaseReference(m_Target);
		}
	}

	XPlatform::VOID IOwner::UnsetOwner()
	{
		if (m_Target != nullptr)
		{
			IObject::DecreaseReference(m_Target);
			m_Target = nullptr;
		}
	}

	AObject IOwner::GetObject()
	{
		return m_Target;
	}

	XPlatform::VOID IOwner::operator = (AObject target)
	{
		SetOwner(target);
	}

	AObject IOwner::operator -> ()
	{
		return m_Target;
	}

	XPlatform::BOOL8 IOwner::IsValid()
	{
		return AcroEngine::IsDestroyed(m_Target);
	}
}