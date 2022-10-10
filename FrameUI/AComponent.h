#pragma once

#include "FrameUI.h"


namespace FrameUI
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �� �������� ���� �⺻���.
	/////////////////////////////////////////////////////////////////////////////
	class Component : public AcroEngine::Object
	{
	private:
	protected:
		virtual void OnAttached() = 0;
		virtual void OnDettached() = 0;
		virtual void OnUpdate(AcroEngine::Float deltaTime) = 0;
	public:

	};
}