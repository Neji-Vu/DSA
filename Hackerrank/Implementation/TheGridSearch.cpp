/***********************************************
 * File:        TheGridSearch.cpp
 * Date:        2025 May 01 20:22:01
 * Description: Basic C++ program template
 ***********************************************/
#include <cstdio>
#include <iostream>

using namespace std;
#define ll long long

int R, C, t, r, c;
int G[1000][1000], P[1000][1000];

int main(int argc, char **argv) {
	cin >> t;

	while (t--) {
		cin >> R >> C;

		for (int i = 0; i < R; ++i) {
			for (int j = 0; j < C; ++j) {
				scanf("%1d", &G[i][j]);
			}
		}

		cin >> r >> c;

		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				scanf("%1d", &P[i][j]);
			}
		}

		bool found = false;
		for (int i = 0; i <= R - r; ++i) {
			for (int j = 0; j <= C - c; ++j) {
				bool flag = true;
				for (int m = 0; m < r; ++m) {
					for (int n = 0; n < c; ++n) {
						if (P[m][n] != G[i + m][j + n]) {
							flag = false;
							break;
						}
					}
					if (!flag)
						break;
				}
				if (flag) {
					found = true;
					cout << "YES\n";
					break;
				}
			}
			if (found)
				break;
		}

		if (!found)
			cout << "NO\n";
	}

	return 0;
}
