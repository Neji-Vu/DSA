/***********************************************
 * File:        DiceCombinations.cpp
 * Date:        2025 Apr 10 14:29:32
 * Description: Basic C++ program template
 ***********************************************/
#include <ctime>
#include <iostream>

using namespace std;
#define ll long long
const int mxN = 1e6;
const int MOD = 1e9 + 7;

int recursion(int left) {
	if (left == 0)
		return 1;

	int ans = 0;
	for (int i = 1; i <= min(left, 6); ++i)
		ans = (ans + recursion(left - i)) % MOD;

	return ans;
}

int dp_td[mxN + 1]{0};
int top_down_recursion(int left) {
	if (dp_td[left] != 0)
		return dp_td[left];

	for (int i = 1; i <= min(left, 6); ++i) {
		dp_td[left] = (dp_td[left] + top_down_recursion(left - i)) % MOD;
	}

	return dp_td[left];
}

int bottom_up(int n) {
	int dp[mxN + 1]{0};
	dp[0] = 1;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= min(6, i); ++j) {
			dp[i] = (dp[i] + dp[i - j]) % MOD;
		}
	}

	return dp[n];
}

int bottom_up_optimized(int n) {
	int dp[7]{0}; // d[0] not use
	dp[6] = 1;

	for (int i = 1; i <= n; ++i) {
		int current = 0;
		for (int j = 1; j <= 6; ++j) {
			current = (current + dp[j]) % MOD;
		}
		// shift window
		for (int j = 1; j <= 5; ++j) {
			dp[j] = dp[j + 1];
		}
		dp[6] = current;
	}

	return dp[6];
}

int main(int argc, char **argv) {
	int n;
	cin >> n;

	auto tStart = clock();
	// cout << recursion(n) << endl;
	// printf("%fs\n", (float)(clock() - tStart) / CLOCKS_PER_SEC);

	// dp_td[0] = 1;
	// tStart = clock();
	// cout << top_down_recursion(n) << endl;
	// printf("%fs\n", (float)(clock() - tStart) / CLOCKS_PER_SEC);
	//
	// tStart = clock();
	// cout << bottom_up(n) << endl;
	// printf("%fs\n", (float)(clock() - tStart) / CLOCKS_PER_SEC);
	//
	// tStart = clock();
	cout << bottom_up_optimized(n) << endl;
	// printf("%fs\n", (float)(clock() - tStart) / CLOCKS_PER_SEC);

	return 0;
}
