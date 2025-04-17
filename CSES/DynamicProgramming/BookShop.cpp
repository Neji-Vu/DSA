/***********************************************
 * File:        BookShop.cpp
 * Date:        2025 Apr 15 16:46:40
 * Description: Basic C++ program template
 ***********************************************/
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

const int mxN = 1e3;
const int mxX = 1e5;
int n, price;
int h[mxN], s[mxN];
int dp[mxN + 1][mxX + 1];

int recursive(int price, int idx) {
	if (price < 0)
		return -1;

	if (idx >= n)
		return 0;

	int maxPage = 0;
	for (int i = idx; i < n; ++i) {
		int temp = recursive(price - h[i], i + 1);
		if (temp != -1)
			maxPage = max(maxPage, temp + s[i]);
	}

	return maxPage;
}

int knapsack_recursive(int idx, int totalVal, int maxWeight) {
	if (totalVal > price)
		return 0;

	if (idx < 0)
		return maxWeight;

	int take = knapsack_recursive(idx - 1, totalVal + h[idx - 1], maxWeight + s[idx - 1]);

	int skipped = knapsack_recursive(idx - 1, totalVal, maxWeight);

	return max(take, skipped);
}

int knapsack_memo(int i, int W) {
	// Base case: no items left or capacity is 0
	if (i == 0 || W == 0)
		return 0;

	// If the result is already computed, return it
	if (dp[i][W] != -1)
		return dp[i][W];

	// If the weight of the current item is more than the remaining capacity, skip it
	if (h[i - 1] > W)
		return dp[i][W] = knapsack_memo(i - 1, W);

	// Return the maximum of two cases:
	// (1) Exclude the current item
	// (2) Include the current item
	return dp[i][W] =
			   max(knapsack_memo(i - 1, W), s[i - 1] + knapsack_memo(i - 1, W - h[i - 1]));
}

int knapsack_iterative(int n, int W, int *w, int *v) {
	vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j <= W; ++j) {
			if (w[i - 1] <= j)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}

	return dp[n][W];
}
int main(int argc, char **argv) {

	cin >> n >> price;
	for (int i = 0; i < n; ++i)
		cin >> h[i];
	for (int i = 0; i < n; ++i)
		cin >> s[i];

	// int max_page = 0;
	// for (int mask = 0; mask < (1 << n); ++mask) {
	// 	int val = 0, page = 0;
	// 	for (int i = 0; i < n; ++i) {
	// 		// another way
	// 		// (mask >> i) & 1
	// 		if (mask >> i & 1) {
	// 			val += h[i];
	// 			page += s[i];
	// 		}
	// 	}
	// 	if (val <= price)
	// 		max_page = max(max_page, page);
	// }
	//
	// cout << max_page << endl;
	// cout << recursive(price, 0) << endl;
	// cout << knapsack_recursive(n, 0, 0) << endl;

	// memset(dp, -1, sizeof(dp));
	// cout << knapsack_memo(n, price);

	cout << knapsack_iterative(n, price, h, s);

	return 0;
}
