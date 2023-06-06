#include <iostream>
#include <string>

std::string GetRandomPassword()
{
	int length = 20;

	std::string password;

	int upper_offset = 2 + rand() % 3;
	int number_offset = 3 + upper_offset;
	int special_offset = 4 + upper_offset;

	for (int i = 0; i < length; i++)
	{
		if (i % upper_offset == 0 && i % number_offset != 0)
		{
			char c = 65 + rand() % 25;
			password += c;
		}
		else if (i % number_offset == 0 && i % special_offset != 0) {
			char c = 48 + rand() % 9;
			password += c;
		}
		else if (i % special_offset == 0) {
			char c = 33 + rand() % 10;
			password += c;
		}
		else {
			char c = 97 + rand() % 25;
			password += c;
		}
	}
	return password;
}

std::string GetCustomizedPassword(unsigned int length, bool has_uppercase, bool has_numbers, bool has_special_chars)
{
	std::string password;

	int upper_offset = 2 + rand() % 3;
	int number_offset = 3 + upper_offset;
	int special_offset = 4 + upper_offset;

	for (int i = 0; i < length; i++)
	{
		if (i % upper_offset == 0 && i % number_offset != 0 && has_uppercase)
		{
			char c = 65 + rand() % 25;
			password += c;
		}
		else if (i % number_offset == 0 && i % special_offset != 0 && has_numbers) {
			char c = 48 + rand() % 9;
			password += c;
		}
		else if (i % special_offset == 0 && has_special_chars) {
			char c = 33 + rand() % 10;
			password += c;
		}
		else {
			char c = 97 + rand() % 25;
			password += c;
		}
	}

	return password;
}

int main()
{
	srand(time(0));

	std::cout << "|| Welcome to the Password Generator Tool.||" << std::endl;
	std::cout << std::endl;

	int decision;
	std::cout << "Do you want a random strong password or customized one? 1: RANDOM, 0: CUSTOMIZED" << std::endl;
	std::cin >> decision;

	if (decision)
	{
		std::string password = GetRandomPassword();
		std::cout << password << std::endl;
	}
	else {
		unsigned int length;
		std::cout << "Enter the length of your desired password: " << std::endl;
		std::cin >> length;

		int upper, numbers, special;
		std::cout << "Do you want your password to have uppercase chars?: 1: YES, 0: NO" << std::endl;
		std::cin >> upper;
		std::cout << "Do you want your password to have numbers?: 1: YES, 0: NO" << std::endl;
		std::cin >> numbers;
		std::cout << "Do you want your password to have special chars?: 1: YES, 0: NO" << std::endl;
		std::cin >> special;

		std::string password = GetCustomizedPassword(length, upper, numbers, special);
		std::cout << password << std::endl;
	}

	system("PAUSE");
	return 0;
}