/***********************************************
 * File:        Repetitions.cpp
 * Date:        2025 Apr 07 15:51:01
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	string s;
	cin >> s;
	int c = 1, ans = 1;

	for (int i = 1; i < s.length(); ++i) {
		if (s[i] == s[i - 1]) {
			++c;
			ans = max(ans, c);
		} else {
			c = 1;
		}
	}

	cout << ans;

	return 0;
}
