#include <iostream>


int getNumber()
{
	return 5;
}

void doStuff(int a)
{
  	std::cout << "Hello World!";	
}

int main()
{
	int number = -1;
	number = getNumber();

	doStuff(number);
}