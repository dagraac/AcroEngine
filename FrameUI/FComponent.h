#pragma once

#include "FrameUI.h"


namespace FrameUI
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �� �������� ���� �⺻���.
	/////////////////////////////////////////////////////////////////////////////
	class IComponent : public AcroEngine::IObject
	{
	private:
	protected:
		virtual void OnAttached() = 0;
		virtual void OnDettached() = 0;
		virtual void OnUpdate(AcroEngine::AFloat deltaTime) = 0;
	public:

	};
}