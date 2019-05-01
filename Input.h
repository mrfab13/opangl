#pragma once



class Input 
{

public:
	Input();
	~Input();
	static void KeyboardDown(unsigned char key, int x, int y);
	static void KeyboardUp(unsigned char key, int x, int y);
	static void specialCharDown(int key, int x, int y);
	static void specialCharUp(int key, int x, int y);
	bool CheckKeyDown(int key);
	bool CheckKeyDownS(int key);

	


	bool checkDownFirst();
	//void processInput();


private:


	bool firstDown = true;
	bool firstUp = false;
	int delay = 0;



};

Input copyinputclass();
