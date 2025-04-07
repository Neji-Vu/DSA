/***********************************************
 * File:        NumberSpiral.cpp
 * Date:        2025 Apr 07 17:11:55
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int t;
	cin >> t;

	while (t--) {
		ll x, y;
		cin >> y >> x;
		ll multiplier = 0, mx = max(x, y);

		multiplier = mx % 2 == 0 ? -1 : 1;

		// dau tien tinh gia tri tai duong cheo
		// (2, 5) => max = 5
		// gia tri tai duong cheo = 1 + 2*1 + 2*2 + 2*3 + 2*4
		// = 1 + 2*(1+2+3+4) = 1 + 2*(4*5)/2 = 1 + 4*5
		// = 1 + max*(max-1)
		//
		// tinh gia tri dua theo hang va cot dua theo multiplier
		cout << (1 + mx * (mx - 1)) + multiplier * (x - y) << endl;
	}
	return 0;
}
