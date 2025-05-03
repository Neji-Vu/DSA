/***********************************************
 * File:        AbsolutePermutation.cpp
 * Date:        2025 May 02 15:45:38
 * Description: Basic C++ program template
 ***********************************************/
#include <algorithm>
#include <cstdlib>
#include <iostream>

using namespace std;
#define ll long long

const int mxN = 1e5 + 1;
int t, n, k;
int a[mxN];

int main(int argc, char **argv) {
	cin >> t;

	while (t--) {
		cin >> n >> k;
		for (int i = 1; i <= n; ++i)
			a[i] = i;

		if (k == 0) {
			for (int i = 1; i <= n; ++i)
				cout << i << " ";
			cout << endl;
			continue;
		}

		if (n % (2 * k) != 0) {
			cout << "-1" << endl;
			continue;
		}

		bool add = true;
		for (int i = 1; i <= n; ++i) {
			if (add)
				cout << i + k << " ";
			else
				cout << i - k << " ";
			if (i % k == 0)
				add = !add;
		}
		cout << endl;

		// bool flag = true;
		// do {
		// 	for (int i = 1; i <= n; ++i) {
		// 		if (abs(a[i] - i) != k) {
		// 			flag = false;
		// 			break;
		// 		}
		// 		flag = true;
		// 	}
		// 	if (flag)
		// 		break;
		// } while (next_permutation(a + 1, a + n + 1));
		// if (!flag)
		// 	cout << "-1";
		// else
		// 	for (int i = 1; i <= n; ++i)
		// 		cout << a[i] << " ";
		// cout << endl;
	}

	return 0;
}
