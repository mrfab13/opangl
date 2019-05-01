#include "ObjectManager.h"

Input input1;

ObjectManager::ObjectManager()
{

}

ObjectManager::~ObjectManager()
{

}

glm::vec3 ObjectManager::GetObjectPos()
{
	return (objPos);
}

void ObjectManager::SetObjectPos(glm::vec3 temp)
{
	objPos = temp;
}

void ObjectManager::initializeObjPos()
{
	objPos = glm::vec3(0.0f, 0.0f, 0.0f);
}

void ObjectManager::movement(Audio1& audio2)
{
	const float speed = 0.05f;
	glm::vec3 temp;
	if (input1.CheckKeyDown('w') == true)
	{
		temp = GetObjectPos();
		temp.y += speed;
		SetObjectPos(temp);
		audio2.playSound(2);
	}
	if (input1.CheckKeyDown('a') == true)
	{
		temp = GetObjectPos();
		temp.x -= speed;
		SetObjectPos(temp);
		audio2.playSound(2);
	}
	if (input1.CheckKeyDown('s') == true)
	{
		temp = GetObjectPos();
		temp.y -= speed;
		SetObjectPos(temp);
		audio2.playSound(2);
	}
	if (input1.CheckKeyDown('d') == true)
	{
		temp = GetObjectPos();
		temp.x += speed;
		SetObjectPos(temp);
		audio2.playSound(2);
	}
}



