/***********************************************
 * File:        CutTheSticks.cpp
 * Date:        2025 Mar 07 15:12:55
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

const int mxN = 1e3;

int main(int argc, char **argv) {
	int n, a[mxN]{0}, min_val = 1e3;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		min_val = min(a[i], min_val);
	}

	vector<int> ans;
	int cnt = -1;
	while (cnt == -1) {
		cnt = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i] > 0) {
				cnt++;
				a[i] -= min_val;
			}
		}
		ans.push_back(cnt);
		min_val = 1000;
		for (int i = 0; i < n; ++i) {
			if (a[i] > 0) {
				min_val = min(min_val, a[i]);
				cnt = -1;
			}
		}
	}

	for (int i : ans)
		cout << i << endl;

	return 0;
}
