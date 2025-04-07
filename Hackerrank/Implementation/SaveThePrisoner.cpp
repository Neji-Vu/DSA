/***********************************************
 * File:        SaveThePrisoner.cpp
 * Date:        2025 Feb 25 14:50:23
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int t, n, m, s;

	cin >> t;
	while (t--) {
		cin >> n >> m >> s;
		int temp = ((m % n) + (s - 1));
		temp = temp == 0 ? n : temp;
		cout << (temp > n ? temp % n : temp) << endl;
	}

	return 0;
}
