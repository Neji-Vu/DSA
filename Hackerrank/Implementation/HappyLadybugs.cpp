/***********************************************
 * File:        HappyLadybugs.cpp
 * Date:        2025 May 01 21:11:13
 * Description: Basic C++ program template
 ***********************************************/
#include <cstdio>
#include <iostream>

using namespace std;
#define ll long long

int g, n;
string s;

int main(int argc, char **argv) {
	cin >> g;

	while (g--) {
		int ch[27]{};
		cin >> n;
		cin >> s;
		for (char t : s) {
			if (t != '_')
				++ch[t - 'A'];
			else
				++ch[26];
		}

		bool flag = false;
		for (int i = 0; i < 26; ++i) {
			if (ch[i] == 1) {
				cout << "NO\n";
				flag = true;
				break;
			}
		}

		if (!flag) {
			if (ch[26] == 0) {
				bool ok = true;
				for (int i = 1; i < n - 1; ++i) {
					if (s[i - 1] != s[i] && s[i] != s[i + 1]) {
						cout << "NO\n";
						ok = false;
						break;
					}
				}
				if (ok)
					cout << "YES\n";
			} else
				cout << "YES\n";
		}
	}

	return 0;
}
