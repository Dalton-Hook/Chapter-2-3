//Three Temperatures
//Created by <Dalton Hook> on <4/9/2018>

#include <iostream>

int main()
{
	int tempat8am;
	int tempat12pm;
	int tempat5pm;
	int celsuisat8am;
	int celsuisat12pm;
	int celsuisat5pm;




	std::cout << "Celsuis at 8 am was." << std::endl;
	std::cin >> celsuisat8am;
	std::cout << "Celsuis at 12:00pm was." << std::endl;
	std::cin >> celsuisat12pm;
	std::cout << "Celsuis at 5:00pm was" << std::endl;
	std::cin >> celsuisat5pm;
	std::cout << "What was the temp at 8 am?" << std::endl;
	std::cin >> tempat8am;
	std::cout << "What was the temp at 12:00pm?" << std::endl;
	std::cin >> tempat12pm;
	std::cout << "What was the temp at 5:00pm?" << std::endl;
	std::cin >> tempat5pm;

	tempat8am - 32 * 5 / 9;
	tempat12pm - 32 * 5 / 9;
	tempat5pm - 32 * 5 / 9;

	system("pause");
	return 0;
}