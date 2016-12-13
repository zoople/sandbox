#include <iostream>


int getNumber()
{
	int number;
	
	std::cout << "Choose a number: ";
	
	std::cin >> number; 

	return number;
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