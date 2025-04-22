/***********************************************
 * File:        NonDivisibleSubset.cpp
 * Date:        2025 Apr 22 15:24:38
 * Description: Basic C++ program template
 ***********************************************/
#include <cstring>
#include <iostream>

using namespace std;
#define ll long long

const int mxN = 1e5;
int n, k;
int S[mxN];

int main(int argc, char **argv) {
	cin >> n >> k;

	int h[k], ans = 0;
	memset(h, 0, sizeof(h));

	for (int i = 0; i < n; ++i) {
		cin >> S[i];
		h[S[i] % k]++;
	}

	ans += h[0] ? 1 : 0;
	for (int i = 1; i <= (k - 1) / 2; ++i) {
		ans += max(h[i], h[k - i]);
	}
	if (k & 1 ^ 1)
		ans += h[k / 2] ? 1 : 0;

	cout << ans;

	return 0;
}
