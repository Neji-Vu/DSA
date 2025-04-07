/***********************************************
 * File:        ViralAdvertising.cpp
 * Date:        2025 Feb 25 14:35:06
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int n;

	cin >> n;
	int shared = 5, liked = 2, ans = 0;

	for (int i = 1; i <= n; i++) {
		liked = shared / 2;
		ans += liked;
		shared = liked * 3;
	}

	cout << ans;

	return 0;
}
