/***********************************************
 * File:        RemovingDigits.cpp
 * Date:        2025 Apr 12 16:44:35
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int recursive(int n) {
	if (n <= 0)
		return 0;

	int max_dig = 0, temp = n;
	while (temp > 0) {
		max_dig = max(max_dig, temp % 10);
		temp /= 10;
	}

	return recursive(n - max_dig) + 1;
}

int main(int argc, char **argv) {
	int n;
	cin >> n;

	cout << recursive(n);

	return 0;
}
