#include "AAllocator.h"

void AcroEngine::AAllocator::Resize(XPlatform::sint32 size)
{
	// �߰�.
	if (m_Size < size)
	{
	}
	// ����.
	else if (m_Size > size)
	{
	}
}

XPlatform::sint32 AcroEngine::AAllocator::GetSize()
{
	return m_Size;
}
