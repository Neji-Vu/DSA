/***********************************************
 * File:        DesignerPDFViewer.cpp
 * Date:        2025 Feb 24 20:30:40
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int h[26];
	string w;

	for (int i = 0; i < 26; ++i)
		cin >> h[i];
	cin >> w;

	int max = 0;
	for (char c : w) {
		max = h[c - 'a'] < max ? max : h[c - 'a'];
	}

	cout << max * w.length();

	return 0;
}
