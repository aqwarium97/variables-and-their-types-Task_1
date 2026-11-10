#include <iostream>
#include <string>
// Этот код непраавильный, т.к. cin обрезает выводимую строку до нажатия Enter И до первого пробела
// Другими словами в консоль выведется только первое слово, а не весь вводимый юзером текст
// Смотреть вебинар с 55 минуты.
int main()

{
	std::string user_input;
	std::cout << "Enter your word:" << std::endl;
	std::getline(std::cin >> std::ws, user_input);
	std::cout << user_input;

	return EXIT_SUCCESS;
}