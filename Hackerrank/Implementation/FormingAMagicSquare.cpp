/***********************************************
 * File:        FormingAMagicSquare.cpp
 * Date:        2025 Feb 12 17:19:35
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <limits>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int a[3][3], ans = std::numeric_limits<int>::max();

	// clang-format off
	int magic_mat[8][3][3] = {
		{{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
		{{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
		{{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
		{{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
		{{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
		{{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
		{{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
		{{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
	};
	// clang-format on

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin >> a[i][j];
		}
	}

	for (int k = 0; k < 8; k++) {
		int cnt = 0;
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				cnt += abs(a[i][j] - magic_mat[k][i][j]);
			}
		}
		ans = min(ans, cnt);
	}

	cout << ans;
	return 0;
}
