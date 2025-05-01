/***********************************************
 * File:        StrangeCounter.cpp
 * Date:        2025 May 02 00:15:51
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

ll t;

int main(int argc, char **argv) {
	cin >> t;

	ll value = 3;
	while (t > value) {
		t -= value;
		value *= 2;
	}

	cout << value - t + 1;

	return 0;
}
