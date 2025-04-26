/***********************************************
 * File:        HalloweenSale.cpp
 * Date:        2025 Apr 26 15:52:23
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int m, p, d, s;

int main(int argc, char **argv) {
	cin >> p >> d >> m >> s;

	int ans = 0;
	s -= p;
	while (s >= 0) {
		++ans;
		p = p - d > m ? p - d : m;
		s -= p;
	}

	cout << ans;

	return 0;
}
