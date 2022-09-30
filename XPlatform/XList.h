#pragma once

#include "XPlatform.h"


namespace XPlatform
{
	/////////////////////////////////////////////////////////////////////////////
	// @ ���߿����� �ڷᱸ�� Ŭ����.
	/////////////////////////////////////////////////////////////////////////////
	class XList
	{
	private:
		struct Node
		{
			VOID* Data;
			Node* Previous;
			Node* Next;
		};

	private:
		Node* m_Head;
		Node* m_Tail;

	public:
		XList()
		{
			m_Head = nullptr;
			m_Tail = nullptr;
		}

		VOID* Front()
		{
			return m_Head != nullptr ? m_Head->Data : nullptr;
		}

		VOID* Back()
		{
			return m_Tail != nullptr ? m_Tail->Data : nullptr;
		}

		VOID PushFront(VOID* Data)
		{
		}

		VOID PushBack(VOID* Data)
		{
		}

		VOID* PopFront()
		{
		}

		VOID* PopBack()
		{
		}
	};
}