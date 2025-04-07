/***********************************************
 * File:        UtopianTree.cpp
 * Date:        2025 Feb 24 21:28:43
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
		int h = 1;
		for (int i = 1; i <= n; i++) {
			h = i % 2 == 0 ? h + 1 : h * 2;
		}
		cout << h << endl;
	}

	return 0;
}
