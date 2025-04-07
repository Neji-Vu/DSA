/***********************************************
 * File:        TwoKnights.cpp
 * Date:        2025 Apr 07 18:16:55
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	ll n;
	cin >> n;

	for (ll i = 1; i <= n; ++i) {
		// the number of ways to place 2 knights on the chessboard
		ll w = i * i * (i * i - 1) / 2;
		if (i > 2)
			// the way 2 knights attack each other
			w -= 4 * (i - 1) * (i - 2);
		cout << w << endl;
	}

	return 0;
}
