/***********************************************
 * File:        TheBombermanGame.cpp
 * Date:        2025 May 03 12:43:31
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define ll long long

int n, r, c;
vector<string> g;
int dx[4]{-1, 1, 0, 0}, dy[4]{0, 0, -1, 1};

bool e(int row, int col) {
	return row >= 0 && row < r && col >= 0 && col < c;
}

int main(int argc, char **argv) {
	cin >> r >> c >> n;
	for (int i = 0; i < r; ++i) {
		string temp;
		cin >> temp;
		g.push_back(temp);
	}

	if (n == 1) {
		for (string s : g)
			cout << s << endl;
		return 0;
	}

	if (n % 2 == 0) {
		for (int i = 0; i < r; ++i)
			cout << string(c, 'O') << endl;
		return 0;
	}

	vector<string> first(r, string(c, 'O'));
	for (int row = 0; row < r; ++row) {
		for (int col = 0; col < c; ++col) {
			if (g[row][col] == 'O') {
				first[row][col] = '.';
				for (int k = 0; k < 4; ++k) {
					if (e(row + dx[k], col + dy[k])) {
						first[row + dx[k]][col + dy[k]] = '.';
					}
				}
			}
		}
	}

	vector<string> second(r, string(c, 'O'));
	for (int row = 0; row < r; ++row) {
		for (int col = 0; col < c; ++col) {
			if (first[row][col] == 'O') {
				second[row][col] = '.';
				for (int k = 0; k < 4; ++k) {
					if (e(row + dx[k], col + dy[k])) {
						second[row + dx[k]][col + dy[k]] = '.';
					}
				}
			}
		}
	}

	for (string s : (n % 4 == 3) ? first : second)
		cout << s << endl;

	return 0;
}
