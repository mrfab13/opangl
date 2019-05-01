#pragma once
#include <iostream>
#include <windows.h>
#include <vector>
#include "glm.hpp"
#include "Input.h"
#include "Audio.h"


class ObjectManager
{
public:

	ObjectManager();
	~ObjectManager();
	glm::vec3 GetObjectPos();
	void SetObjectPos(glm::vec3);
	void initializeObjPos();
	void movement(Audio1& audio2);

private:
	glm::vec3 objPos;
};