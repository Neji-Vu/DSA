/***********************************************
 * File:        ServiceLane.cpp
 * Date:        2025 Apr 26 18:11:47
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

const int mxN = 1e5;
int n, t, w[mxN];

int main(int argc, char **argv) {
	cin >> n >> t;
	for (int i = 0; i < n; ++i)
		cin >> w[i];

	while (t--) {
		int s, e;
		cin >> s >> e;

		int ans = 1e9;
		for (int i = s; i <= e; ++i) {
			ans = min(w[i], ans);
		}

		cout << ans << endl;
	}

	return 0;
}
