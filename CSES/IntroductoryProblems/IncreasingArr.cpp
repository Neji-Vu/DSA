/***********************************************
 * File:        IncreasingArr.cpp
 * Date:        2025 Apr 07 16:07:06
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long
const int mxN = 2 * 1e5;

ll MySolution() {
	int n, a[mxN];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	ll ans = 0;
	for (int i = 1; i < n; ++i) {
		if (a[i] < a[i - 1]) {
			ans += a[i - 1] - a[i];
			a[i] = a[i - 1];
		}
	}

	return ans;
}

ll YTBSolution() {
	int n, maxX = 0;
	ll ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		maxX = max(x, maxX);
		ans += maxX - x;
	}
	return ans;
}

int main(int argc, char **argv) {
	cout << YTBSolution();

	return 0;
}
