
#include<iostream>

int main()
{
	std::cout << "What is a kanine?\n" << std::endl;
	std::cout << "a, A Cat\n";
	std::cout << "b, A Dog\n";
	std::cout << "c, A Bird\n";

	char answer;
	std::cin >> answer;
	if (answer == 'b')
	{
		std::cout << "The correct answer is always correct\n";
	}
	else
	{
		std::cout << "Are you a dumb dumb? the correct answer is a DOG!\n";
	}
}