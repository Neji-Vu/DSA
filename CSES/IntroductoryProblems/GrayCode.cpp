/***********************************************
 * File:        GrayCode.cpp
 * Date:        2025 Apr 08 15:46:55
 * Description: Basic C++ program template
 ***********************************************/
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define ll long long

vector<string> solved(int n) {
	vector<string> actual;
	if (n == 1) {
		actual.push_back("0");
		actual.push_back("1");
		return actual;
	}
	vector<string> prev = solved(n - 1);
	for (int i = 0; i < prev.size(); ++i) {
		string s;
		s += '0';
		s += prev[i];
		actual.push_back(s);
	}
	for (int j = prev.size() - 1; j >= 0; --j) {
		string s;
		s += '1';
		s += prev[j];
		actual.push_back(s);
	}
	return actual;
}

int main(int argc, char **argv) {
	int n;
	cin >> n;

	vector<string> ans = solved(n);
	for (string &s : ans) {
		cout << s << endl;
	}

	return 0;
}
