/***********************************************
 * File:        TheHurdleRace.cpp
 * Date:        2025 Feb 24 19:42:37
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int n, k, mxN = 100, height[mxN], max = 0;

	cin >> n >> k;
	for (int i = 0U; i < n; ++i) {
		cin >> height[i];
		max = max > height[i] ? max : height[i];
	}

	cout << (max > k ? max - k : 0);

	return 0;
}
