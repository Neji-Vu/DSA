/***********************************************
 * File:        Encryption.cpp
 * Date:        2025 Apr 25 18:18:42
 * Description: Basic C++ program template
 ***********************************************/
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define ll long long

string s;

int main(int argc, char **argv) {
	getline(cin, s);

	s.erase(std::remove(s.begin(), s.end(), ' '), s.end());

	int row = floor(sqrt(s.length())), col = ceil(sqrt(s.length()));
	row = row * col < s.length() ? row + 1 : row;

	vector<string> v(row, "");
	for (int i = 0; i < row; ++i) {
		v[i] = s.substr(0, col);
		s.erase(0, col);
	}

	vector<string> ans;
	for (int j = 0; j < col; ++j) {
		string temp = "";
		for (int i = 0; i < row; ++i) {
			if (i == row - 1 && j >= v[i].length())
				break;
			temp += v[i][j];
		}
		ans.push_back(temp);
	}

	for (string i : ans)
		cout << i << " ";

	return 0;
}
