#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

// list of standard io
// scanf
// std::cin
// std::cin.getline
// gets


int main()
{
	static const int capacity = 256;
	char buffer[capacity];
	std::string container;

	std::cout << ">";
	std::getline(std::cin, container);
	std::cout << "std::getline(" << container << ")" << std::endl;
	std::cout << "stdin to clear" << std::endl;
	std::cin >> container;
	std::cout << container << std::endl;
	std::cout << std::endl;

	return 0;
}