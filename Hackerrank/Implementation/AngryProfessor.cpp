/***********************************************
 * File:        AngryProfessor.cpp
 * Date:        2025 Feb 24 22:50:17
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int t, n, k, a[1000];

	cin >> t;
	while (t--) {
		cin >> n >> k;
		int cnt = 0U;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] <= 0)
				cnt++;
		}
		cout << (cnt >= k ? "NO" : "YES") << endl;
	}

	return 0;
}
