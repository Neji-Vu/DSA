/***********************************************
 * File:        CoinPiles.cpp
 * Date:        2025 Apr 08 13:18:11
 * Description: Basic C++ program template
 ***********************************************/
#include <cmath>
#include <iostream>

using namespace std;
#define ll long long

// Time limit exceeded
string MySolution(int a, int b) {
	while (a > 0 && b > 0) {
		if (a > b) {
			a -= 2;
			b--;
		} else {
			b -= 2;
			a--;
		}
	}
	return (a == 0 && b == 0 ? "YES" : "NO");
}

string YTBSolution(int a, int b) {
	return (a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a ? "YES" : "NO";
}

int main(int argc, char **argv) {
	int t, a, b;
	cin >> t;

	while (t--) {
		cin >> a >> b;

		cout << YTBSolution(a, b) << endl;
	}

	return 0;
}
