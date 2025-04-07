/***********************************************
 * File:        Permutations.cpp
 * Date:        2025 Apr 07 16:46:17
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

void MySolution(int n) {
	// case 4:
	if (n == 4) {
		cout << "2 4 1 3";
		return;
	}
	if (n < 4 && n > 1) {
		cout << "NO SOLUTION";
		return;
	}

	int c = 0, temp = n;
	while (c != temp) {
		cout << n << " ";
		++c;
		if (n == 1 || n == 2) {
			n = temp - 1;
		} else
			n -= 2;
	}
}

void YTBSolution(int n) {
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION";
		return;
	}
	// 2 4 1 3
	for (int i = 2; i <= n; i += 2) {
		cout << i << " ";
	}
	for (int i = 1; i <= n; i += 2) {
		cout << i << " ";
	}
}

int main(int argc, char **argv) {
	int n;
	cin >> n;

	YTBSolution(n);

	return 0;
}
