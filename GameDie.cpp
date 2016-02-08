#include "GameDie.h"

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	num = 0; //initialize the private variable to 0
	srand( time( NULL ) );  //  using the time seed from srand explanation
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
	num = rand() % (21 - 1) + 1; //generate number between 1 and 20 inclusive
	cout<<num<<endl; //print out the number
	return;
}


