/***********************************************
 * File:        LisasWorkbook.cpp
 * Date:        2025 Apr 26 18:49:54
 * Description: Basic C++ program template
 ***********************************************/
#include <cmath>
#include <iostream>

using namespace std;
#define ll long long

int n, k;
int probs[100];

int main(int argc, char **argv) {
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
		cin >> probs[i];

	int page = 1, ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 1; j <= probs[i]; ++j) {
			if (page == j)
				++ans;
			if (j % k == 0 || j == probs[i])
				++page;
		}
	}

	cout << ans;

	return 0;
}
