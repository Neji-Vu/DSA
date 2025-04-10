/***********************************************
 * File:        MinimizingCoins.cpp
 * Date:        2025 Apr 10 17:47:09
 * Description: Basic C++ program template
 ***********************************************/
#include <climits>
#include <cstdio>
#include <ctime>
#include <iostream>

using namespace std;
#define ll long long
const int mxN = 1e6;

int recursive(int *c, int x, int size) {
	if (x < 0)
		return -1;

	if (x == 0)
		return 0;

	int ans = INT_MAX;
	for (int i = 0; i < size; ++i) {
		int val = recursive(c, x - c[i], size);
		if (val != -1)
			ans = min(ans, val + 1);
	}
	// min
	return ans == INT_MAX ? -1 : ans;
}

int dp_top_down[mxN + 1];
int top_down_recursive(int *c, int x, int size) {
	if (x < 0)
		return -1;

	if (dp_top_down[x] != INT_MAX)
		return dp_top_down[x];

	int ans = INT_MAX;
	for (int i = 0; i < size; ++i) {
		int val = top_down_recursive(c, x - c[i], size);
		if (val != -1)
			ans = min(ans, val + 1);
	}
	// min
	dp_top_down[x] = ans == INT_MAX ? -1 : ans;
	return dp_top_down[x];
}

int bottom_up(int *c, int x, int size) {
	int dp[x + 1];
	dp[0] = 0;

	for (int i = 1; i <= x; ++i) {
		int current = INT_MAX;
		for (int j = 0; j < size; ++j) {
			if (i - c[j] >= 0 && dp[i - c[j]] != -1) {
				current = min(current, dp[i - c[j]] + 1);
			}
		}
		dp[i] = current == INT_MAX ? -1 : current;
	}

	return dp[x];
}

int main(int argc, char **argv) {
	int n, x;
	int c[mxN];
	cin >> n >> x;
	for (int i = 0; i < n; ++i)
		cin >> c[i];

	// clock_t tStart = clock();
	// cout << recursive(c, x, n) << endl;
	// printf("%fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	//
	// tStart = clock();
	for (int i = 0; i <= x; ++i)
		dp_top_down[i] = INT_MAX;
	dp_top_down[0] = 0;
	cout << top_down_recursive(c, x, n) << endl;
	// printf("%fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

	// cout << bottom_up(c, x, n);

	return 0;
}
