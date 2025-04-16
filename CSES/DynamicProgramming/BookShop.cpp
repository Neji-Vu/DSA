/***********************************************
 * File:        BookShop.cpp
 * Date:        2025 Apr 15 16:46:40
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

const int mxN = 1e3;
int n, price;
int h[mxN], s[mxN];

int recursive(int price, int idx) {
	if (price < 0)
		return -1;

	if (idx >= n)
		return 0;

	int maxPage = 0;
	for (int i = idx; i < n; ++i) {
		int temp = recursive(price - h[i], i + 1);
		if (temp != -1)
			maxPage = max(maxPage, temp + s[i]);
	}

	return maxPage;
}

int main(int argc, char **argv) {

	cin >> n >> price;
	for (int i = 0; i < n; ++i)
		cin >> h[i];
	for (int i = 0; i < n; ++i)
		cin >> s[i];

	int max_page = 0;
	for (int mask = 0; mask < (1 << n); ++mask) {
		int val = 0, page = 0;
		for (int i = 0; i < n; ++i) {
			// another way
			// (mask >> i) & 1
			if (mask >> i & 1) {
				val += h[i];
				page += s[i];
			}
		}
		if (val <= price)
			max_page = max(max_page, page);
	}

	cout << max_page << endl;
	cout << recursive(price, 0);

	return 0;
}
