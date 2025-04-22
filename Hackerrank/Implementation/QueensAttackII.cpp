/***********************************************
 * File:        QueensAttackII.cpp
 * Date:        2025 Apr 22 17:37:08
 * Description: Basic C++ program template
 ***********************************************/
#include <cstdlib>
#include <iostream>

using namespace std;
#define ll long long

int n, k, r_q, c_q;

int main(int argc, char **argv) {
	cin >> n >> k;
	cin >> r_q >> c_q;

	// max steps in each of 8 directions
	int up = n - r_q;
	int down = r_q - 1;
	int right = n - c_q;
	int left = c_q - 1;
	int up_right = min(up, right);
	int up_left = min(up, left);
	int down_right = min(down, right);
	int down_left = min(down, left);

	for (int i = 0; i < k; ++i) {
		int r_o, c_o;
		cin >> r_o >> c_o;

		// same column
		if (c_o == c_q) {
			if (r_o > r_q)
				up = min(up, r_o - r_q - 1);
			else
				down = min(down, r_q - r_o - 1);
		}
		// same row
		else if (r_o == r_q) {
			if (c_o > c_q)
				right = min(right, c_o - c_q - 1);
			else
				left = min(left, c_q - c_o - 1);
		}
		// diagonal
		else if (abs(r_o - r_q) == abs(c_o - c_q)) {
			if (r_o > r_q && c_o > c_q)
				up_right = min(up_right, r_o - r_q - 1);
			else if (r_o > r_q && c_o < c_q)
				up_left = min(up_left, r_o - r_q - 1);
			else if (r_o < r_q && c_o > c_q)
				down_right = min(down_right, r_q - r_o - 1);
			else if (r_o < r_q && c_o < c_q)
				down_left = min(down_left, r_q - r_o - 1);
		}
	}

	int totalMoves = up + down + right + left + up_right + up_left + down_right + down_left;
	cout << totalMoves << endl;

	return 0;
}
