#include <iostream>
#include <freeglut.h>
#include <vector>
#include "Input.h"
#include "ObjectManager.h"
#include "glm.hpp"



using namespace std;
Input input2;

ObjectManager objectmanager2;

enum InputState
{
	INPUT_UP,
	INPUT_DOWN,
	INPUT_UP_FIRST,
	INPUT_DOWN_FIRST,
};

InputState KeyState[255];
InputState KeyState_S[255];



Input::Input()
{
}

Input::~Input()
{
}


Input copyinputclass()
{
	return(input2);
}

bool Input::CheckKeyDown(int key)
{
	if (key == 'w')
	{
		if (KeyState['w'] == INPUT_DOWN)
		{
			return (true);
		}
		else
		{
			return(false);
		}
	}

	if (key == 'a')
	{
		if (KeyState['a'] == INPUT_DOWN)
		{
			return(true);
		}
		else
		{
			return(false);
		}

	}
	if (key == 'a')
	{
		if (KeyState['w'] == INPUT_DOWN)
		{
			return (true);
		}
		else
		{
			return(false);
		}
	}

	if (key == 'a')
	{
		if (KeyState['a'] == INPUT_DOWN)
		{
			return(true);
		}
		else
		{
			return(false);
		}

	}
	if (key == 's')
	{
		if (KeyState['s'] == INPUT_DOWN)
		{
			return (true);
		}
		else
		{
			return(false);
		}
	}

	if (key == 'd')
	{
		if (KeyState['d'] == INPUT_DOWN)
		{
			return(true);
		}
		else
		{
			return(false);
		}

	}
	
	return(false);
}

bool Input::CheckKeyDownS(int key)
{
	return false;
}

bool Input::checkDownFirst()
{
	return (firstDown);
}



void Input::KeyboardDown(unsigned char key, int x, int y)
{
	KeyState[key] = INPUT_DOWN;
	
	if (input2.delay > 0)
	{
		if (input2.firstDown == true)
		{
			input2.firstDown = false;
			input2.delay = 0;
		}
	}
	input2.delay++;

}

void Input::KeyboardUp(unsigned char key, int x, int y)
{
	KeyState[key] = INPUT_UP;

	if (input2.delay > 0)
	{
		if (input2.firstDown == false)
		{
			input2.firstDown = true;
			input2.delay = 0;
		}
	}
	input2.delay++;
}

void Input::specialCharDown(int key, int x, int y)
{
	KeyState_S[key] = INPUT_DOWN;
}

void Input::specialCharUp(int key, int x, int y)
{
	KeyState_S[key] = INPUT_UP;
}


