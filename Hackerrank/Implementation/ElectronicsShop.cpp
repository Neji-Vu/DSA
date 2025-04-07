/***********************************************
 * File:        ElectronicsShop.cpp
 * Date:        2025 Feb 12 16:02:57
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int b, n, m, max = -1;

	cin >> b >> n >> m;
	int k[n], d[m];
	for (int i = 0; i < n; ++i)
		cin >> k[i];
	for (int i = 0; i < m; ++i)
		cin >> d[i];

	for (int i : k) {
		for (int j : d) {
			if (i + j <= b)
				max = (i + j > max) ? i + j : max;
		}
	}

	cout << max;

	return 0;
}
