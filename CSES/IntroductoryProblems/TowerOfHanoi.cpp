/***********************************************
 * File:        TowerOfHanoi.cpp
 * Date:        2025 Apr 08 20:04:07
 * Description: Basic C++ program template
 ***********************************************/
#include <array>
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

vector<array<int, 2>> moves;

void solved(int n, int src, int dest, int help) {
	if (n > 0) {
		solved(n - 1, src, help, dest);
		cout << src << " " << dest << endl;
		solved(n - 1, help, dest, src);
	}
}

int main(int argc, char **argv) {
	int n;
	cin >> n;

	cout << (1 << n) - 1 << endl;
	solved(n, 1, 3, 2);

	return 0;
}
