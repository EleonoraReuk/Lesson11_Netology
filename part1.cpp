#include <iostream>

int main()
{
	std::string Name;
	std::string Surname;
	std::cout << "Введите имя: ";
	std::cin >> Name;
	std::cout << "Введите фамилию: ";
	std::cin >> Surname;

	std::cout << "Здравствуйте, " + Name + " " + Surname + "!";
}
