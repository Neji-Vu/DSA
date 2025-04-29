/***********************************************
 * File:        FairRations.cpp
 * Date:        2025 Apr 29 17:53:28
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int n;
int b[1000];

int main(int argc, char **argv) {
	cin >> n;
	int sum = 0, ans = 0;
	for (int i = 0; i < n; ++i)
		cin >> b[i], sum += b[i];

	if (sum & 1) {
		cout << "NO";
		return 0;
	}

	int prev = -1;
	for (int i = 0; i < n; ++i) {
		if (b[i] & 1 && prev == -1) {
			prev = i;
			continue;
		}
		if (b[i] & 1) {
			ans += (i - prev) * 2;
			prev = -1;
		}
	}

	cout << ans;

	return 0;
}
