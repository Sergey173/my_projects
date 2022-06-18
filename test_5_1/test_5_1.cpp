#include <iostream>
#include <cmath>
#include "constants.h"

void printHeight(int timePassed, double heightNow)
{
	std::cout << "At " << timePassed << " secs ";
	if (heightNow < 0)
		std::cout << "The ball is on the ground.\n";
	else
		std::cout << "the hight is:" << heightNow << "\n";
}

void calculateHeight(int height0)
{
	double heightNow;
	int timePassed{ 0 };
	do
	{
		heightNow = height0 - myConstants::gravityg * pow(timePassed, 2) / 2;
		printHeight(timePassed, heightNow);
		++timePassed;
	} while (heightNow > 0);
}


int main()
{
	std::cout << "Enter initial height of the ball:\n";
	int height0;
	std::cin >> height0;

	calculateHeight(height0);

	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();

	return 0;
}


