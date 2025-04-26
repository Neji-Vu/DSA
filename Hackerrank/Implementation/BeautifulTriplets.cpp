/***********************************************
 * File:        BeautifulTriplets.cpp
 * Date:        2025 Apr 26 14:35:08
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

const int mxN = 1e4;
int n, d;
int a[mxN], h[2 * mxN + 1]{};

int main(int argc, char **argv) {
	cin >> n >> d;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		++h[a[i]];
	}

	// int ans = 0;
	// for (int i = 0; i < n - 2; ++i) {
	// 	for (int j = i + 1; j < n - 1; ++j) {
	// 		if (a[j] - a[i] == d)
	// 			for (int k = j + 1; k < n; ++k) {
	// 				if (a[k] - a[j] == d)
	// 					++ans;
	// 			}
	// 	}
	// }

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] + d <= 2e4 && a[i] + 2 * d <= 2e4)
			if (h[a[i] + d] != 0 && h[a[i] + 2 * d] != 0)
				ans++;
	}
	cout << ans;

	return 0;
}
