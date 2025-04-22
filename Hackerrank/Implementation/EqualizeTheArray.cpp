/***********************************************
 * File:        EqualizeTheArray.cpp
 * Date:        2025 Apr 22 17:15:48
 * Description: Basic C++ program template
 ***********************************************/
#include <algorithm>
#include <iostream>

using namespace std;
#define ll long long

int h[101]{0}, n;

int main(int argc, char **argv) {
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		++h[temp];
	}

	int max = *max_element(h, h + 101), ans = 0;
	bool flag = true;
	for (int i = 1; i <= 100; ++i) {
		if (h[i] == max && flag) {
			flag = false;
			continue;
		}
		ans += h[i];
	}

	cout << ans;

	return 0;
}
