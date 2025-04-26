/***********************************************
 * File:        ChocolateFeast.cpp
 * Date:        2025 Apr 26 17:17:34
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int n, c, m;

int main(int argc, char **argv) {
	int t;
	cin >> t;

	while (t--) {
		cin >> n >> c >> m;

		int newCho = n / c, rem = 0, ans = 0;
		while (newCho > 0) {
			ans += newCho;
			int total = rem + newCho;
			rem = total % m;
			newCho = total / m;
		}

		cout << ans << endl;
	}

	return 0;
}
