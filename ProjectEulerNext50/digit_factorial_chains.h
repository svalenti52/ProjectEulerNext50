#pragma once

#include <set>
#include <deque>
#include <iostream>
#include <numeric>
#include "../repos/MonteCarlo/MonteCarlo/Primes.h"

using namespace std;

int factorial(int n)
{
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

void digit_factorial_chains()
{
	set<int> period_detect;

	int count_period_60 = 0;
	
	for (int number = 1; number < 1'000'000; ++number)
	{
		period_detect.clear();
		period_detect.insert(number);
		int period = 1;
		int sum_fact = number;
		for (; period <= 60; ++period)
		{
			deque<int> digits = number_to_digits_ms_to_ls(sum_fact);
			sum_fact = transform_reduce(digits.begin(), digits.end(), 0, plus(), factorial);
			//cout << "Sum Fact = " << sum_fact << '\n';
			auto itrb = period_detect.insert(sum_fact);
			if (!itrb.second) break;
		}
		if (period == 60)
			++count_period_60;
		//cout << "Period = " << period << '\n';
	}
	cout << "Count of Period 60 = " << count_period_60 << '\n';
}
