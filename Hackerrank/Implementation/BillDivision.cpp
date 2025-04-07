/***********************************************
 * File:        BillDivision.cpp
 * Date:        2025 Feb 10 16:47:35
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main() {
	int mxn = 1e5;
	int n, k, bill[mxn], b;
	int anna = 0;

	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> bill[i];
		if (i != k)
			anna += bill[i];
	}
	cin >> b;
	if ((anna / 2) == b)
		cout << "Bon Appetit";
	else
		cout << b - (anna / 2);

	return 0;
}
