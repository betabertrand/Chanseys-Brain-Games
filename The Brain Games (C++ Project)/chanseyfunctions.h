//function header file




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



using namespace std;

static const char UDLR[] = "UDLR";
static const char allnumb[] = "1234567890";
static const char allchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static const char SLR[] = "SLR";

int stringLength = sizeof(UDLR) - 1;
int stringLength1 = sizeof(allnumb) - 1;
int stringLength2 = sizeof(allchar) - 1;
int stringLength3 = sizeof(SLR) - 1;




void DisplayScore(int);


char genRandom1()
{
	return UDLR[rand() % stringLength];

}

char genRandom2()
{
	return allnumb[rand() % stringLength1];
}

char genRandom3()
{
	return allchar[rand() % stringLength2];
}

char genRandom4()
{
	return SLR[rand() % stringLength3];
}


using std::chrono::milliseconds;

void delayed_out(const std::string& message,
	milliseconds letter_delay = milliseconds(300),
	milliseconds disappearance_delay = milliseconds(10000))
{
	const std::size_t msgLen = message.length();
	const std::string erasure_string = std::string(msgLen, '\b') +
		std::string(msgLen, ' ') + std::string(msgLen, '\b');

	std::size_t msgIdx = 0;

	while (msgIdx != msgLen)
	{
		std::cout << message[msgIdx++];
		std::this_thread::sleep_for(letter_delay);
	}

	std::this_thread::sleep_for(disappearance_delay);
	std::cout << erasure_string;

}

void delayed_out1(const std::string& message,
	milliseconds letter_delay = milliseconds(75))
{
	const std::size_t msgLen = message.length();
	const std::string erasure_string = std::string(msgLen, '\b') +
		std::string(msgLen, ' ') + std::string(msgLen, '\b');

	std::size_t msgIdx = 0;

	while (msgIdx != msgLen)
	{
		std::cout << message[msgIdx++];
		std::this_thread::sleep_for(letter_delay);
	}
}

void DisplayScore(int x)
{
	if (x == 10)
	{
		//display perfect
		cout << "PERFECT!!!!\nYOU SCORED EVERYTHING CORRECTLY\n\n";
	}
	else if (x < 10 && x >= 5)
	{
		//display good
		cout << "GOOD JOB. You remembered most of the Letters.\n\n";

	}

	else if (x < 5)
	{
		//display bad
		cout << "You didn't remember most of the letters. You should Try again.\n\n";
	}
}