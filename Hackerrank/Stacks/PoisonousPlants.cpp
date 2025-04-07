/***********************************************
 * File:        PoisonousPlants.cpp
 * Date:        2025 Mar 13 16:03:28
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <stack>
#include <vector>

using namespace std;
#define ll long long
const int mxN = 1e5;

int main(int argc, char **argv) {
	int n;
	vector<int> p;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		p.push_back(temp);
	}

	stack<int> st;
	int cnt = 0, ans = 0, size = p.size();
	do {
		cnt = 0;
		size = p.size();
		for (int i = 1; i < p.size(); ++i) {
			if (p[i] > p[i - 1])
				st.push(i);
			else
				cnt++;
		}
		if (!st.empty())
			ans++;
		while (!st.empty()) {
			p.erase(p.begin() + st.top());
			st.pop();
		}
	} while (cnt + 1 != size);

	cout << ans;

	return 0;
}
