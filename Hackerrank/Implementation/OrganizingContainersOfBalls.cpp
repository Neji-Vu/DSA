/***********************************************
 * File:        OrganizingContainersOfBalls.cpp
 * Date:        2025 Apr 25 17:38:53
 * Description: Basic C++ program template
 ***********************************************/
#include <algorithm>
#include <iostream>

using namespace std;
#define ll long long

int n;
int containers[100][100];

int main(int argc, char **argv) {
	int q;
	cin >> q;

	while (q--) {
		cin >> n;

		int c[100]{}, r[100]{};
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> containers[i][j];
				r[i] += containers[i][j];
				c[j] += containers[i][j];
			}
		}

		sort(r, r + n);
		sort(c, c + n);

		string ans = "Possible";
		for (int i = 0; i < n; ++i) {
			if (c[i] != r[i]) {
				ans = "Impossible";
				break;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
