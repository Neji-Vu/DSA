/***********************************************
 * File:        CountingValleys.cpp
 * Date:        2025 Feb 12 15:30:51
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int s, cnt = 0;
	string path;

	cin >> s;
	cin >> path;

	int temp = 0;
	for (char c : path) {
		if (c == 'U') {
			temp++;
			if (temp == 0)
				cnt++;
		} else
			temp--;
	}
	cout << cnt;

	return 0;
}
