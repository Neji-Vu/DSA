/***********************************************
 * File:        test1.cpp
 * Date:        2025 Mar 24 11:02:52
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int a = 1;
	int b = 2;
	if ((a = b)) {
		cout << "foo";

	} else
		cout << "test";
	int *p = &a;
	// cout << p;

	vector<int> v(2);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	cout << v.size();
	return 0;
}
