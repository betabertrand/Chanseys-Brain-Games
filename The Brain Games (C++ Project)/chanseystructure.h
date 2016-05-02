// Struct header file



#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <functional>
#include <time.h>





struct Random
{

std::string cmmString, eString, mString, hString;


};

struct Menu
{

char one, two, three;


};

struct Playagain
{

char game1, game2e, game2m, game2h;

Playagain()
{

	game1=' ', game2e=' ', game2m=' ', game2h=' ';
}

};

struct Game1
{
	string output;

Game1()
{
	output = " ";
}
};

struct Gamechoice
{
	std::string gc1, gc2e,gc2m,gc2h, gc3e,gc3m,gc3h;
};

struct Gamescore
{
	int g2e, g2m, g2h, g3e, g3m, g3h;

	int g2hse, g2hsm, g2hsh, g3hse, g3hsm, g3hsh;
	
	Gamescore()
	{
		g2e= 0, g2m= 0, g2h= 0, g3e= 0, g3m= 0, g3h= 0;

		g2hse= 0, g2hsm= 0, g2hsh= 0, g3hse= 0, g3hsm= 0, g3hsh= 0;

	}
	

};