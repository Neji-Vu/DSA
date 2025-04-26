/***********************************************
 * File:        MinimumDistances.cpp
 * Date:        2025 Apr 26 15:16:59
 * Description: Basic C++ program template
 ***********************************************/
#include <climits>
#include <cstring>
#include <iostream>
#include <limits.h>

using namespace std;
#define ll long long

const int mxN = 1e3, mxH = 1e5 + 1;
int n;
int a[mxN], h[mxH]{};

int main(int argc, char **argv) {
	cin >> n;

	int ans = INT_MAX;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (h[a[i]] != 0)
			ans = min(ans, i + 1 - h[a[i]]);
		h[a[i]] = i + 1;
	}

	cout << (ans == INT_MAX ? -1 : ans);

	return 0;
}
