/***********************************************
 * File:        Sorting.cpp
 * Date:        2025 May 05 23:37:43
 * Description: Basic C++ program template
 ***********************************************/
#include <array>
#include <iostream>
#include <utility>

using namespace std;
#define ll long long

array<int, 10> a{1, 12, 8, 5, 2, 6, 4, 15, 9, 10};

void print(array<int, 10> arr) {
	for (int i = 0; i < 10; ++i) {
		cout << arr[i] << " ";
	}

	cout << endl << endl;
}

array<int, 10> BubbleSort() {
	array<int, 10> ret = a;

	cout << "Bubble Sort:\n";
	for (int i = ret.size() - 1; i >= 0; --i)
		for (int j = 0; j < i; ++j)
			if (ret[j] > ret[j + 1])
				swap(ret[j], ret[j + 1]);

	return ret;
}

array<int, 10> InsertionSort() {
	array<int, 10> ret = a;

	cout << "Insertion Sort:\n";
	for (int i = 1; i < ret.size(); ++i) {
		int x = ret[i];
		int pos = i;

		while (pos >= 0 && x < ret[pos - 1]) {
			ret[pos] = ret[pos - 1];
			--pos;
		}

		ret[pos] = x;
	}

	return ret;
}

int main(int argc, char **argv) {
	print(a);

	print(BubbleSort());
	print(InsertionSort());

	return 0;
}
