/***********************************************
 * File:        ManasaAndStones.cpp
 * Date:        2025 May 01 16:59:18
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int n, a, b, t;

int main(int argc, char **argv) {
	cin >> t;

	while (t--) {
		cin >> n >> a >> b;

		if (a > b) {
			a = a + b;
			b = a - b;
			a = a - b;
		}

		if (a == b) {
			cout << a * (n - 1);
		} else {
			for (int i = 0; i < n; ++i) {
				cout << (a * (n - 1 - i) + b * i) << " ";
			}
		}

		cout << endl;
	}

	return 0;
}
