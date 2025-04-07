/***********************************************
 * File:        WeirdAlgo.cpp
 * Date:        2025 Apr 07 14:59:34
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	ll n;
	cin >> n;
	cout << n;

	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = n * 3 + 1;
		}
		cout << " " << n;
	}

	return 0;
}
