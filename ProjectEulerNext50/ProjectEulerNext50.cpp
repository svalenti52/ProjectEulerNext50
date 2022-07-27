// ProjectEulerNext50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "prime_digit_replacement.h"
#include "permuted_multiples.h"
#include "combinatoric_selections.h"
#include "poker_hands.h"

int main()
{
	char c = '0';
	while (c != 'x')
	{
		std::cout << "\n1. Prime Digit Replacement";
		std::cout << "\n2. Permuted Multiples";
		std::cout << "\n3. Combinatoric Selections";
		std::cout << "\n4. Poker Hands";
		std::cout << "\nx. Exit\n";

		std::cin >> c;

		switch (c)
		{
		case '1':
			// ID 51
			prime_digit_replacement();
			break;
		case '2':
			permuted_multiples();
			break;
		case '3':
			combinatoric_selections();
			break;
		case '4':
			poker_hands();
			break;
		case 'x':
			break;
		default:
			break;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
