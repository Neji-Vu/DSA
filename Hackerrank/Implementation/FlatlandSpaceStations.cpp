/***********************************************
 * File:        FlatlandSpaceStations.cpp
 * Date:        2025 Apr 29 14:26:35
 * Description: Basic C++ program template
 ***********************************************/
#include <algorithm>
#include <iostream>

using namespace std;
#define ll long long

const int mxN = 1e5;
int m, n;
int c[mxN];

int main(int argc, char **argv) {
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> c[i];
	}

	sort(c, c + m);

	int maxDistance = max(c[0], n - 1 - c[m - 1]);
	for (int i = 1; i < m; ++i) {
		int temp = (c[i] - c[i - 1]) / 2;
		maxDistance = max(maxDistance, temp);
	}

	cout << maxDistance;

	return 0;
}
