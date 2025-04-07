/***********************************************
 * File:        TwoSets.cpp
 * Date:        2025 Apr 07 22:06:38
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

void MySolution(int n) {
	if ((n * (n + 1) / 2) % 2 != 00) {
		cout << "NO";
		return;
	}

	cout << "YES\n";

	vector<int> f;
	vector<int> s;

	if (n % 2 == 0) {
		for (int i = 1; i <= n / 2; i++) {
			if (i % 2 == 0) {
				f.push_back(i);
				f.push_back(n - i + 1);
			} else {
				s.push_back(i);
				s.push_back(n - i + 1);
			}
		}
	} else {
		for (int i = 1; i <= (n - 1) / 2; ++i) {
			if (i % 2 == 0) {
				f.push_back(i);
				f.push_back(n - i);
			} else {
				s.push_back(i);
				s.push_back(n - i);
			}
		}
		f.push_back(n);
	}

	cout << f.size() << endl;
	for (int &i : f) {
		cout << i << " ";
	}

	cout << endl << s.size() << endl;
	for (int &i : s) {
		cout << i << " ";
	}
}

int main(int argc, char **argv) {
	int n;
	cin >> n;

	MySolution(n);

	return 0;
}
