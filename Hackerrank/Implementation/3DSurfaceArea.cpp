/***********************************************
 * File:        3DSurfaceArea.cpp
 * Date:        2025 May 02 14:28:40
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

int h, w, a[102][102]{};

int main(int argc, char **argv) {
	cin >> h >> w;
	for (int i = 1; i <= h; ++i)
		for (int j = 1; j <= w; ++j)
			cin >> a[i][j];

	ll ans = 0;
	for (int i = 1; i <= h; ++i) {
		for (int j = 1; j <= w; ++j) {
			int left = a[i][j] > a[i - 1][j] ? a[i][j] - a[i - 1][j] : 0;
			int right = a[i + 1][j] > a[i][j] ? 0 : a[i][j] - a[i + 1][j];
			int front = a[i][j] > a[i][j - 1] ? a[i][j] - a[i][j - 1] : 0;
			int rear = a[i][j + 1] > a[i][j] ? 0 : a[i][j] - a[i][j + 1];
			ans += 2 + left + right + front + rear;
		}
	}

	cout << ans;

	return 0;
}
