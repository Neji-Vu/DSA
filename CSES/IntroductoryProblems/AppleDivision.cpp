/***********************************************
 * File:        AppleDivision.cpp
 * Date:        2025 Apr 09 23:05:28
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int get_bit(int mask, int i) {
	return (mask >> i) & 1;
}

int main(int argc, char **argv) {
	int n;
	ll p[20];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> p[i];

	// Brute force to calc the difference between 2 groups
	// Eg. n = 3 (loop from [1 ,2^n) = [1, 2^3=8))
	// p[i]: 3 5 7
	//
	// "0" will be added to the first group
	// "1" will be added to the second group
	// mask  3 5 7
	//    1: 0 0 1 => sum_f = 3 + 5 = 8    sum_s = 7               diff = 1
	//    2: 0 1 0 => sum_f = 3 + 7 = 10   sum s = 5               diff = 5
	//    3: 0 1 1 => sum_f = 3            sum_s = 5 + 7 = 12      diff = 9
	//    4: 1 0 0 => sum_f = 5 + 7 = 12   sum_s = 3               diff = 9
	//    5: 1 0 1 => sum_f = 5            sum_s = 3 + 7 = 10      diff = 5
	//    6: 1 1 0 => sum_f = 7            sum_s = 3 + 5 = 8       diff = 1
	//    7: 1 1 1 => sum_f = 0            sum_s = 3 + 5 + 7 = 15  diff = 15
	//
	// *Note: to reduce time execution
	// the groups after 2^n/2 is the same groups before 2^n/2
	// (after 2^n/2, the first group exchange the second group)
	// so just need to iterate from [0, 2^n/2)

	ll ans = 1e9;
	// (1 << n) = 2^n
	// For condition: mask = 1 => mask < (1 << n): normal
	//                mask = 0 => mask < (1 << n)/2: optimazation
	for (int mask = 0; mask < (1 << n) / 2; ++mask) {
		ll sum_f = 0, sum_s = 0;
		for (int i = 0; i < n; ++i) {
			// another way
			// (mask >> i) & 1
			if (get_bit(mask, i))
				sum_s += p[i];
			else
				sum_f += p[i];
		}
		ans = min(ans, abs(sum_f - sum_s));
	}

	cout << ans;

	return 0;
}
