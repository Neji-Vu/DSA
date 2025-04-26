/***********************************************
 * File:        ModifiedKaprekarNumbers.cpp
 * Date:        2025 Apr 26 13:51:40
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;
#define ll long long

int p, q;

int main() {
	cin >> p >> q;
	vector<int> ans;

	for (int i = p; i <= q; ++i) {
		int d = to_string(i).length();
		string num = to_string(static_cast<ll>(pow(i, 2)));

		int r = stoi(num.substr(num.length() - d, d));
		num.erase(num.length() - d, d);
		int l = num.length() == 0 ? 0 : stoi(num);

		if (l + r == i)
			ans.push_back(i);
	}

	if (ans.size() == 0)
		cout << "INVALID RANGE";
	else
		for (int &i : ans)
			cout << i << " ";

	return 0;
}
