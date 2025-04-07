/***********************************************
 * File:        FindDigits.cpp
 * Date:        2025 Feb 27 15:53:27
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int t, n;

	cin >> t;
	while (t--) {
		cin >> n;
		int tmp = n, ans{0};
		while (tmp > 0) {
			if (tmp % 10 != 0 && n % (tmp % 10) == 0)
				ans++;
			tmp /= 10;
		}
		cout << ans << endl;
	}

	return 0;
}
