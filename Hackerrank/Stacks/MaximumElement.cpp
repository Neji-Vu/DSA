/***********************************************
 * File:        MaximumElement.cpp
 * Date:        2025 Mar 08 13:39:45
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <stack>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	stack<int> st, maxVal;
	int n, op, arg;
	cin >> n;

	while (n--) {
		cin >> op;
		switch (op) {
		case 1:
			cin >> arg;

			st.push(arg);
			if (maxVal.empty()) {
				maxVal.push(arg);
			} else {
				maxVal.push(arg > maxVal.top() ? arg : maxVal.top());
			}
			break;
		case 2:
			if (!st.empty()) {
				st.pop();
				maxVal.pop();
			}
			break;
		case 3:
			cout << maxVal.top() << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}
