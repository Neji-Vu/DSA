/***********************************************
 * File:        BeautifulDasAtThemovies.cpp
 * Date:        2025 Feb 25 00:38:26
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <string>

using namespace std;
#define ll long long

int resersedNumber(int n) {
	string w = to_string(n);
	for (int i = 0; i < w.length() / 2; i++) {
		char tmp = w[i];
		w[i] = w[w.length() - 1 - i];
		w[w.length() - 1 - i] = tmp;
	}
	return stoi(w);
}

int main(int argc, char **argv) {
	int i, j, k, cnt = 0U;

	cin >> i >> j >> k;
	for (int l = i; l <= j; l++) {
		if ((l - resersedNumber(l)) % k == 0)
			cnt++;
	}
	cout << cnt;

	return 0;
}
