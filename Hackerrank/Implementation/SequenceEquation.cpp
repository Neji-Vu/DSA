/***********************************************
 * File:        SequenceEquation.cpp
 * Date:        2025 Feb 26 16:26:20
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int n;

	cin >> n;
	int p[n + 1];
	for (int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		// input:	5 2 1 3 4
		// inverse: 3 2 4 5 1
		p[tmp] = i;
	}

	for (int i = 1; i <= n; i++)
		cout << p[p[i]] << endl;

	return 0;
}
