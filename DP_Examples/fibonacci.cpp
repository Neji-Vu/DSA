/***********************************************
 * File:        fibonacci.cpp
 * Date:        2025 Apr 08 02:05:40
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

ll fib_recursion(int n) {
	if (n <= 1)
		return n;
	return fib_recursion(n - 2) + fib_recursion(n - 1);
}

ll dp_top_down[100 + 1] = {0};
ll fib_top_down_recursion(int n) {
	if (n <= 1)
		return n;

	if (dp_top_down[n] != 0)
		return dp_top_down[n];

	dp_top_down[n] = fib_top_down_recursion(n - 2) + fib_top_down_recursion(n - 1);

	return dp_top_down[n];
}

ll fib_bottom_up(int n) {
	ll dp_bottom_up[100 + 1]{0};
	dp_bottom_up[0] = 0;
	dp_bottom_up[1] = 1;

	for (int i = 2; i <= n; ++i) {
		dp_bottom_up[i] = dp_bottom_up[i - 2] + dp_bottom_up[i - 1];
	}

	return dp_bottom_up[n];
}

ll fib_bottom_up_optimization(int n) {
	if (n <= 1)
		return n;

	ll prev2 = 0, prev1 = 1, cur = 0;

	for (int i = 2; i <= n; ++i) {
		cur = prev2 + prev1;
		prev2 = prev1;
		prev1 = cur;
	}

	return cur;
}

int main(int argc, char **argv) {
	int n;
	cin >> n;

	clock_t tStart = clock();
	// cout << fib_recursion(n) << endl;
	// printf("Time taken: %fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

	tStart = clock();
	cout << fib_top_down_recursion(n) << endl;
	printf("Time taken: %fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

	tStart = clock();
	cout << fib_bottom_up(n) << endl;
	printf("Time taken: %fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

	tStart = clock();
	cout << fib_bottom_up_optimization(n) << endl;
	printf("Time taken: %fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

	return 0;
}
