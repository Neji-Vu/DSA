#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
	int n, k, a[100];

	cin >> n >> k;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int count = 0;

	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if ((a[i] + a[j]) % k == 0)
			// count++;
		}
	}

	cout << count;

	return 0;
}
