#include <iostream>
#include <string> 
#include "FunctionNameCalls.h"

int main()
{
	float var = 21567.534534536f;
	const char* String = "hello";
	Log("Hello World!");
	std::cout << var << std::endl;
	std::cout << multiplay(5, 5) << std::endl;
	std::cout << power(2, 4) << std::endl;
	Log("Press any key to continue...");
	std::string a;
	std::cout << "Enter a string: ";
	std::getline(std::cin, a);
	std::cout << "You entered: " << a << std::endl;
}
