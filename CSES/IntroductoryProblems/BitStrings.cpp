/***********************************************
 * File:        BitStrings.cpp
 * Date:        2025 Apr 08 04:33:17
 * Description: Basic C++ program template
 ***********************************************/
#include <cmath>
#include <iostream>

using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

int main(int argc, char **argv) {
	ll n, ans = 1;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		ans = 2 * ans % mod;
	}
	cout << ans;

	return 0;
}
