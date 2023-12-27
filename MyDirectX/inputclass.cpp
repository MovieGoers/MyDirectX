#include "inputclass.h"


InputClass::InputClass()
{
}


InputClass::InputClass(const InputClass& other)
{
}


InputClass::~InputClass()
{
}


void InputClass::Initialize()
{
	int i;

	// ��� Ű�� ���� array�� �ʱ�ȭ.
	for (i = 0; i < 256; i++)
	{
		m_keys[i] = false;
	}

	return;
}


void InputClass::KeyDown(unsigned int input)
{
	// Ű�� ������ ���, true state�� �Է�.
	m_keys[input] = true;
	return;
}


void InputClass::KeyUp(unsigned int input)
{
	// Ű�� �����ٰ� �� ���, false state�� �Է�.
	m_keys[input] = false;
	return;
}


bool InputClass::IsKeyDown(unsigned int key)
{
	// Ű�� ���ȴ��� state ��ȯ.
	return m_keys[key];
}