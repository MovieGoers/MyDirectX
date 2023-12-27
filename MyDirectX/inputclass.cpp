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

	// 모든 키에 대한 array를 초기화.
	for (i = 0; i < 256; i++)
	{
		m_keys[i] = false;
	}

	return;
}


void InputClass::KeyDown(unsigned int input)
{
	// 키를 눌렀을 경우, true state로 입력.
	m_keys[input] = true;
	return;
}


void InputClass::KeyUp(unsigned int input)
{
	// 키를 눌렀다가 뗀 경우, false state로 입력.
	m_keys[input] = false;
	return;
}


bool InputClass::IsKeyDown(unsigned int key)
{
	// 키가 눌렸는지 state 반환.
	return m_keys[key];
}