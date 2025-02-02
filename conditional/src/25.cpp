#include <iostream>
#include <iomanip>
#include <random>

int main()
{
	int user, number;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution <> dst(1,9);

	number = dst(gen);
	std::cout << "Try to guess the number in range from 0 to 9: ";
	std::cin >> user;
	
	if (user == number ){std::cout << "Congratulation the number was: " << user << std::endl;}
	else{std::cout << "WRONG ! Sorry the number was " << number << std::endl;}

	return 0;
}
