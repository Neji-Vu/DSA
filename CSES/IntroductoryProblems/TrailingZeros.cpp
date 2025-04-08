/***********************************************
 * File:        TrailingZeros.cpp
 * Date:        2025 Apr 08 05:02:23
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

ll MySolution(int n) {
	ll ans = 0;
	for (int i = 5; i <= n; i += 5) {
		int temp = i;
		while (temp % 5 == 0) {
			ans++;
			temp /= 5;
		}
	}
	return ans;
}

ll YTBSolution(int n) {
	ll ans = 0;
	for (int i = 5; i <= n; i *= 5) {
		ans += n / i;
	}
	return ans;
}

int main(int argc, char **argv) {
	int n;
	cin >> n;

	cout << YTBSolution(n);

	return 0;
}
