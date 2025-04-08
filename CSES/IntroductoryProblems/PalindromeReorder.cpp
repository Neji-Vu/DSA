/***********************************************
 * File:        PalindromeReorder.cpp
 * Date:        2025 Apr 08 14:19:23
 * Description: Basic C++ program template
 ***********************************************/
#include <algorithm>
#include <array>
#include <iostream>
#include <stack>

using namespace std;
#define ll long long

string MySolution(string s) {
	int c[26]{};

	for (char d : s) {
		++c[d - 'A'];
	}

	string ans;
	stack<array<int, 2>> st;
	int cnt = 0, idx = 0;
	for (int i = 0; i < 26; ++i) {
		if (cnt > 1)
			return "NO SOLUTION";
		if (c[i] > 0) {
			if (c[i] % 2 == 0) {
				ans.append(c[i] / 2, i + 'A');
				st.push({i, c[i] / 2});
			} else {
				cnt++;
				idx = i;
			}
		}
	}
	if (cnt == 1)
		ans.append(c[idx], (idx + 'A'));
	while (!st.empty()) {
		ans.append(st.top()[1], (st.top()[0] + 'A'));
		st.pop();
	}
	return ans;
}

string YTBSolution(string s) {
	int c[26]{}, cnt = 0;

	for (char d : s) {
		++c[d - 'A'];
	}
	for (int i = 0; i < 26; ++i) {
		// if(c[i] % 2 == 1)
		// 		++cnt;
		// c[i] is odd (c[i] & 1 is 1) => cnt increases by 1
		// c[i] is even (c[i] & 1 is 0) => cnt stays the same
		cnt += c[i] & 1;
	}

	if (cnt > 1)
		return "NO SOLUTION";

	string ans;
	for (int i = 0; i < 26; ++i) {
		// if(c[i] % 2 == 0)
		// c[i] & 1
		// c[i] is odd (c[i] & 1 is 1)
		// c[i] is even (c[i] & 1 is 0)
		// ^ 1
		// (even)[c[i] & 1 = 0] ^ 1 = 1
		// (odd) [c[i] & 1 = 1] ^ 1 = 0
		// even => true (eg. c[i] = 4 => true)
		// odd => false (eg. c[i] = 5 => false)
		if (c[i] & 1 ^ 1)
			ans += string(c[i] / 2, i + 'A');
	}

	string temp = ans;
	reverse(temp.begin(), temp.end());

	for (int i = 0; i < 26; ++i) {
		if (c[i] & 1)
			ans += string(c[i], i + 'A');
	}

	return ans + temp;
}

int main(int argc, char **argv) {
	string s;
	cin >> s;
	cout << MySolution(s);
	return 0;
}
