/***********************************************
 * File:        PickingNumbers.cpp
 * Date:        2025 Feb 24 15:30:12
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int n, a[101] = {0}, ans = 0U;

	cin >> n;
	for (int i = 0U; i < n; i++) {
		int k;
		cin >> k;
		a[k]++;
	}
	for (int i = 1; i < 101; ++i)
		ans = max(ans, a[i] + a[i - 1]);

	cout << ans;

	return 0;
}
