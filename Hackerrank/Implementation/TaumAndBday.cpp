/***********************************************
 * File:        TaumAndBday.cpp
 * Date:        2025 Apr 25 16:15:25
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

ll b, w, bc, wc, z;

int main(int argc, char **argv) {
	int t;
	cin >> t;

	ll ans = 0;
	while (t--) {
		cin >> b >> w;
		cin >> bc >> wc >> z;

		if (z + wc < bc)
			ans = w * wc + b * (z + wc);
		else if (z + bc < wc)
			ans = w * (z + bc) + b * bc;
		else
			ans = b * bc + w * wc;

		cout << ans << endl;
	}

	return 0;
}
