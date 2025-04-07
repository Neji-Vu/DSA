/***********************************************
 * File:        SherlockAndSquares.cpp
 * Date:        2025 Feb 27 17:36:41
 * Description: Basic C++ program template
 ***********************************************/
#include <cmath>
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int a, b, q, num;

	cin >> q;
	while (q--) {
		cin >> a >> b;
		int cnt = 0;
		num = ceil(sqrt(a));

		for (; num * num <= b; num++) {
			cnt++;
		}
		cout << cnt << endl;
	}

	return 0;
}
