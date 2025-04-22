/***********************************************
 * File:        EqualizeTheArray.cpp
 * Date:        2025 Apr 22 17:15:48
 * Description: Basic C++ program template
 ***********************************************/
#include <algorithm>
#include <iostream>

using namespace std;
#define ll long long

int h[101]{0}, n;

int main(int argc, char **argv) {
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		++h[temp];
	}

	cout << n - *max_element(h, h + 101);

	return 0;
}
