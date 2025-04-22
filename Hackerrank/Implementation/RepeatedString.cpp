/***********************************************
 * File:        RepeatedString.cpp
 * Date:        2025 Apr 22 16:13:09
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

string s;
ll n, ans = 0;

int main(int argc, char **argv) {
	cin >> s >> n;

	int num_of_a = 0, modulo_a = 0;

	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == 'a') {
			++num_of_a;
			if (i < n % s.length())
				++modulo_a;
		}
	}

	cout << (n / s.length()) * num_of_a + modulo_a;

	return 0;
}
