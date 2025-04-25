/***********************************************
 * File:        ACMICPCTeam.cpp
 * Date:        2025 Apr 25 14:15:11
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int m, n;

int main(int argc, char **argv) {
	cin >> n >> m;

	vector<string> v(n, "");
	for (int i = 0; i < n; ++i)
		cin >> v[i];

	int h[501]{};
	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			int cnt = 0;
			for (int k = 0; k < m; ++k) {
				if (v[i][k] == '1' || v[j][k] == '1') {
					++cnt;
				}
			}
			++h[cnt];
		}
	}

	for (int i = m; i > 0; --i) {
		if (h[i] > 0) {
			cout << i << endl << h[i];
			break;
		}
	}

	return 0;
}
