/***********************************************
 * File:        CCppProgramming_Vu_Manh_Cuong.cpp
 * Date:        2025 Mar 01 14:55:22
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define MAX_DITGIT 9

void find_the_digit(int *arr, int num) {
	int length = 0;
	while (num != 0) {
		arr[length++] = num % 10;
		num /= 10;
	}
	for (int i = 0; i < length / 2; i++) {
		int tmp = arr[i];
		arr[i] = arr[length - i - 1];
		arr[length - i - 1] = tmp;
	}
}

int first_solution(int a, int b) {
	int a_dit[MAX_DITGIT] = {0}, b_dit[MAX_DITGIT] = {0};
	for (int i = 0; i < MAX_DITGIT; i++) {
		a_dit[i] = -1;
		b_dit[i] = -1;
	}
	long long ans = 0;

	find_the_digit(a_dit, a);
	find_the_digit(b_dit, b);

	int mul = 1;
	int i = 0, j = 0;
	for (; (a_dit[i] != -1 && b_dit[j] != -1) || j >= MAX_DITGIT;) {
		if (i == j) {
			ans = ans * mul + a_dit[i++];
			mul = 10;
		}
		if (j == i - 1) {
			ans = ans * mul + b_dit[j++];
			mul = 10;
		}
	}
	if (a_dit[i] != -1) {
		for (; i >= MAX_DITGIT || a_dit[i] != -1;) {
			ans = ans * mul + a_dit[i++];
		}
	}

	if (b_dit[i] != -1) {
		for (; i >= MAX_DITGIT || b_dit[i] != -1;) {
			ans = ans * mul + b_dit[i++];
		}
	}
	return ans > 1e8 ? -1 : ans;
}

int main(int argc, char **argv) {
	// a and b are in range [0, 100,000,000]
	int a, b;

	cin >> a >> b;

	cout << first_solution(a, b);

	return 0;
}
