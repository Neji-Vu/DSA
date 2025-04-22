/***********************************************
 * File:        JumpingOnTheClouds.cpp
 * Date:        2025 Feb 27 15:00:25
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int n, k;

	cin >> n >> k;
	bool c[n];
	for (int i = 0; i < n; i++)
		cin >> c[i];

	int e{100}, i = 0;
	do {
		e -= 1 + c[i] * 2;
		i = (i + k) % n;
	} while (i != 0);

	cout << e;

	return 0;
}
