/***********************************************
 * File:        CavityMap.cpp
 * Date:        2025 Apr 29 19:08:59
 * Description: Basic C++ program template
 ***********************************************/
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
#define ll long long

int n, grid[100][100];

bool e(int i, int j) {
	return i > 0 && i < n - 1 && j > 0 && j < n - 1 && grid[i - 1][j] < grid[i][j] &&
		   grid[i + 1][j] < grid[i][j] && grid[i][j - 1] < grid[i][j] &&
		   grid[i][j + 1] < grid[i][j];
}

int main(int argc, char **argv) {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string temp;
		cin >> temp;
		for (int j = 0; j < temp.length(); ++j)
			grid[i][j] = temp[j] - '0';
	}

	if (n < 3) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j)
				cout << grid[i][j];
			cout << endl;
		}
	} else {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (e(i, j))
					cout << 'X';
				else
					cout << grid[i][j];
			}
			cout << endl;
		}
	}

	return 0;
}
