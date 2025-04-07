/***********************************************
 * File:        MissingNumber.cpp
 * Date:        2025 Apr 07 15:09:38
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long
const int mxN = 2 * 10e5;

int MySolution() {
	int n, temp;
	cin >> n;

	int a[mxN] = {0};
	for (int i = 1; i < n; ++i) {
		cin >> temp;
		a[temp]++;
	}

	for (int i = 1; i <= n; ++i) {
		if (a[i] == 0) {
			return i;
		}
	}
	return -1;
}

int OptimalSolution() {
	ll sum = 0, n;
	cin >> n;

	for (int i = 1; i < n; ++i) {
		int temp;
		cin >> temp;
		sum += temp;
	}

	return (n * (n + 1) / 2) - sum;
}

int main(int argc, char **argv) {

	cout << OptimalSolution();

	return 0;
}
