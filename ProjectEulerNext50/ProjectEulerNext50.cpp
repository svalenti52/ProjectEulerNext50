// ProjectEulerNext50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "prime_digit_replacement.h"
#include "permuted_multiples.h"
#include "combinatoric_selections.h"
#include "poker_hands.h"
#include "lychrel_numbers.h"
#include "power_digit_sum.h"
#include "sqr_rt_convergents.h"
#include "spiral_primes.h"
#include "xor_decryption.h"
#include "prime_pair_sets.h"
#include "cyclical_figurate.h"
#include "cubic_permutations.h"
#include "power_digit_counts.h"
#include "odd_per_sqr_roots.h"
#include "convergent_e.h"
#include "diophantine.h"
#include "max_path_sum_2.h"
#include "magic_5gon_ring.h"
#include "totient_max.h"
#include "totient_permutation.h"
#include "ordered_fractions.h"
#include "counting_fractions.h"
#include "counting_fractions_range.h"
#include "digit_factorial_chains.h"
#include "single_int_right_triangles.h"
#include "counting_summations.h"
#include "prime_summations.h"
#include "coin_partitions.h"
#include "passcode_derivation.h"
#include "su_doku.h"
#include "sqrt_digital_expansion.h"

int main()
{
	char c = '0';
	while (c != 'x')
	{
		std::cout << "\n1. Prime Digit Replacement";
		std::cout << "\n2. Permuted Multiples";
		std::cout << "\n3. Combinatoric Selections";
		std::cout << "\n4. Poker Hands";
		std::cout << "\n5. Lychrel Numbers";
		std::cout << "\n6. Power Digit Sum";
		std::cout << "\n7. Square Root Convergents";
		std::cout << "\n8. Spiral Primes";
		std::cout << "\n9. Xor Decryption";
		std::cout << "\na. Prime Pair Sets";
		std::cout << "\nb. Cyclical Figurate Numbers";
		std::cout << "\nc. Cubic Permutations";
		std::cout << "\nd. Power Digit Counts";
		std::cout << "\ne. Odd Period Square Roots";
		std::cout << "\nf. Convergents of e";
		std::cout << "\ng. Diophantine";
		std::cout << "\nh. Max Path Triangle 2";
		std::cout << "\ni. Magic 5-gon Ring";
		std::cout << "\nj. Totient Maximum";
		std::cout << "\nk. Totient Permutation";
		std::cout << "\nl. Ordered Fractions";
		std::cout << "\nm. Counting Fractions";
		std::cout << "\nn. Counting Fractions Range";
		std::cout << "\no. Digit Factorial Chains";
		std::cout << "\np. Single Integral Right Triangles";
		std::cout << "\nq. Counting Summations";
		std::cout << "\nr. Prime Summations";
		std::cout << "\ns. Coin Partitions";
		std::cout << "\nt. Passcode Derivation";
		std::cout << "\nu. Su Doku";
		std::cout << "\nv. Square Root Digital Expansion";
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
		case '5':
			lychrel_numbers();
			break;
		case '6':
			power_digit_sum();
			break;
		case '7':
			square_root_convergents();
			break;
		case '8':
			spiral_primes();
			break;
		case '9':
			xor_decryption();
			break;
		case 'a':
			prime_pair_sets();
			break;
		case 'b':
			cyclical_figurate();
			break;
		case 'c':
			cubic_permutations();
			break;
		case 'd':
			power_digit_counts();
			break;
		case 'e':
			odd_per_sqr_roots();
			break;
		case 'f':
			convergent_e();
			break;
		case 'g':
			diophantine1();
			break;
		case 'h':
			max_path_sum_2();
			break;
		case 'i':
			magic_5gon_ring();
			break;
		case 'j':
			totient_max();
			break;
		case 'k':
			totient_permutation();
			break;
		case 'l':
			ordered_fractions();
			break;
		case 'm':
			counting_fractions();
			break;
		case 'n':
			counting_fractions_range();
			break;
		case 'o':
			digit_factorial_chains();
			break;
		case 'p':
			single_int_right_triangles1();
			break;
		case 'q':
			//findCombinations(100);
			combos1();
			break;
		case 'r':
			prime_summations();
			break;
		case 's':
			coin_partitions();
			break;
		case 't':
			passcode_derivation();
			break;
		case 'u':
			su_doku();
			break;
		case 'v':
			sqrt_digital_expansion();
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
