/***********************************************
 * File:        GridPaths.cpp
 * Date:        2025 Apr 12 17:32:25
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

const int mxN = 1000, MOD = 1e9 + 7;

int recursive(vector<string> &s, int x, int y) {
	if (x == s.size() - 1 && y == s.size() - 1)
		return 1;

	if (x == s.size() || y == s.size() || s[x][y] == '*')
		return 0;

	return (recursive(s, x + 1, y) + recursive(s, x, y + 1)) % MOD;
}

int dp_top_down[mxN][mxN];
int top_down_recursive(vector<string> &s, int x, int y) {
	if (x == s.size() || y == s.size() || s[x][y] == '*')
		return 0;

	if (dp_top_down[x][y] != -1)
		return dp_top_down[x][y];

	dp_top_down[x][y] =
		(top_down_recursive(s, x + 1, y) + top_down_recursive(s, x, y + 1)) % MOD;

	return dp_top_down[x][y];
}

int bottom_up(vector<string> &s, int x, int y) {
	int dp[mxN + 1][mxN + 1]{};
	dp[s.size() - 1][s.size() - 1] = 1;

	for (int i = s.size() - 1; i >= 0; --i) {
		for (int j = s.size() - 1; j >= 0; --j) {
			if (i == s.size() - 1 && j == s.size() - 1)
				continue;
			if (dp[i][j] != '*')
				dp[i][j] = (dp[i + 1][j] + dp[i][j + 1]) % MOD;
		}
	}

	return dp[x][y];
}

int main(int argc, char **argv) {
	int n;
	cin >> n;
	vector<string> s(n);
	for (int i = 0; i < n; ++i)
		cin >> s[i];

	// cout << recursive(s, 0, 0) << endl;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			dp_top_down[i][j] = -1;

	dp_top_down[n - 1][n - 1] = 1;
	cout << top_down_recursive(s, 0, 0) << endl;

	cout << bottom_up(s, 0, 0) << endl;

	return 0;
}
