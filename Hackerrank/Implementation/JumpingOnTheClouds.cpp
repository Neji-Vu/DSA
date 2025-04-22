/***********************************************
 * File:        JumpingOnTheClouds.cpp
 * Date:        2025 Apr 22 16:46:23
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int n;
int c[100]{0};

int main(int argc, char **argv) {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> c[i];

	int idx = 0, ans = 0;
	do {
		++ans;
		idx += (c[idx + 2] != 1 ? 2 : 1);
	} while (idx < n - 1);

	cout << ans;

	return 0;
}
