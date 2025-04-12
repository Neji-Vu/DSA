/***********************************************
 * File:        MinimizingCoins.cpp
 * Date:        2025 Apr 10 17:47:09
 * Description: Basic C++ program template
 ***********************************************/
#include <algorithm>
#include <climits>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;
#define ll long long
const int mxN = 1e6;
const int MOD = 1e9 + 7;

int recursive(int *c, int x, int size, int pos = 0) {
	if (x < 0)
		return 0;

	if (x == 0)
		return 1;

	int ans = 0;
	for (int i = pos; i < size; ++i) {
		ans = (ans + recursive(c, x - c[i], size, i)) % MOD;
	}

	return ans;
}

int bottom_up(int *c, int x, int size) {
	vector<int> dp(x + 1, 0);
	dp[0] = 1;

	for (int j = 0; j < size; ++j) {
		for (int i = 1; i <= x; ++i) {
			if (i - c[j] >= 0) {
				dp[i] = (dp[i] + dp[i - c[j]]) % MOD;
			}
		}
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

	cout << bottom_up(c, x, n);

	return 0;
}
