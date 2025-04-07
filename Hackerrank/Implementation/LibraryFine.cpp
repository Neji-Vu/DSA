/***********************************************
 * File:        LibraryFine.cpp
 * Date:        2025 Feb 27 18:52:40
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int d1, m1, y1, d2, m2, y2;

	cin >> d1 >> m1 >> y1;
	cin >> d2 >> m2 >> y2;

	int ans = 0;
	if (y2 - y1 < 0)
		ans = 1e4;
	else if (y2 - y1 == 0) {
		if (m2 - m1 < 0)
			ans = abs(m2 - m1) * 500;
		else if (m2 - m1 == 0) {
			if (d2 - d1 < 0)
				ans = abs(d2 - d1) * 15;
		}
	}

	cout << ans;

	return 0;
}
