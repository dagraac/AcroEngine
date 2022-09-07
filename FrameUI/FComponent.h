#pragma once

#include "FrameUI.h"


namespace FrameUI
{
	/////////////////////////////////////////////////////////////////////////////
	// @ �� �������� ���� �⺻���.
	/////////////////////////////////////////////////////////////////////////////
	class FComponent : public AObject
	{
	private:
	protected:
		virtual void OnAttached() = 0;
		virtual void OnDettached() = 0;
		virtual void OnUpdate(AFloat deltaTime) = 0;
	public:

	};
}