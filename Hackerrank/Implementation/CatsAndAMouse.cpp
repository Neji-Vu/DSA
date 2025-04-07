/***********************************************
 * File:        CatsAndAMouse.cpp
 * Date:        2025 Feb 12 16:53:54
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int q;
	cin >> q;

	while (q--) {
		int x, y, z;
		cin >> x >> y >> z;

		int l = abs(z - x), r = abs(z - y);
		cout << (l == r ? "Mouse C" : (l > r ? "Cat B" : "Cat A")) << endl;
	}

	return 0;
}
