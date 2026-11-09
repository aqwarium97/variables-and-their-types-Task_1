#include <iostream>

int main()
{
	std::cout << "Enter your number: " << std::endl;
	int user_number{};
	std::cin >> user_number;
	std::cout << "You enter:" << std::endl;
	std::cout << user_number;

	return EXIT_SUCCESS;
}