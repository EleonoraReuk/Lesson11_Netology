#include <iostream>

int main()
{
	std::string Word{ "apple" };
	std::string MyWord;

	do
	{
		std::cout << "Угадайте слово: ";
		std::cin >> MyWord;
		if (MyWord.find("apple") == std::string::npos)
		{
			std::cout << "Неправильно!" << std::endl;
		}
		else
		{
			std::cout << "Правильно! Вы победили! Загаданное слово - " << Word;
		}
	} while (MyWord != Word);
}