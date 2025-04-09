/***********************************************
 * File:        CreatingStrings.cpp
 * Date:        2025 Apr 09 09:43:20
 * Description: Basic C++ program template
 ***********************************************/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	vector<string> ans;

	do {
		ans.push_back(s);
	} while (next_permutation(s.begin(), s.end()));

	cout << ans.size() << endl;
	for (string a : ans)
		cout << a << endl;

	return 0;
}
