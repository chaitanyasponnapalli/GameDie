#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <iostream>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;
class GameDie
{
	public:
		GameDie();
		void roll();
	private:
		int num; //private variable to store the generated number
};

//#include "GameDie.cpp" //commented this line to include GameDie.cpp
#endif
