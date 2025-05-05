/***********************************************
 * File:        LarrysArray.cpp
 * Date:        2025 May 05 15:10:50
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

const int mxN = 1001;
int t, n;
int a[mxN];

int main(int argc, char **argv) {
	cin >> t;

	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; ++i)
			cin >> a[i];

		// for (int i = 1; i <= n - 2; ++i) {
		// 	if (a[i] != i) {
		// 		for (int j = i + 1; j <= n; ++j) {
		// 			if (a[j] == i) {
		// 				if (j - i == 1) {
		// 					int temp = a[i];
		// 					a[i] = a[i + 1];
		// 					a[i + 1] = a[i + 2];
		// 					a[i + 2] = temp;
		// 					break;
		// 				}
		// 				if ((j - i) % 2 == 0) {
		// 					for (int k = j; k >= i + 1; --k)
		// 						a[k] = a[k - 1];
		// 				} else {
		// 					for (int k = j; k >= i + 2; --k)
		// 						a[k] = a[k - 1];
		// 					a[i + 2] = a[i];
		// 				}
		// 				a[i] = i;
		// 				break;
		// 			}
		// 		}
		// 	}
		// }
		//
		// if (a[n] - a[n - 1] == 1)
		// 	cout << "YES\n";
		// else
		// 	cout << "NO\n";

		int cnt = 0;
		for (int i = 1; i <= n; ++i)
			for (int j = i + 1; j <= n; ++j)
				if (a[i] > a[j])
					++cnt;

		if (cnt % 2 == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}
