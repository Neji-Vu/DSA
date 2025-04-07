/***********************************************
 * File:        BalancedBrackets.cpp
 * Date:        2025 Mar 08 14:24:05
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <stack>

using namespace std;
#define ll long long

string isBalanced(string s) {
	stack<char> st;
	for (char c : s) {
		if (c == '(' || c == '[' || c == '{')
			st.push(c);

		else if (!st.empty()) {
			if (c == ')' && st.top() != '(')
				return "NO";
			else if (c == ']' && st.top() != '[')
				return "NO";
			else if (c == '}' && st.top() != '{')
				return "NO";
			else {
				st.pop();
			}
		} else {
			return "NO";
		}
	}
	return st.empty() ? "YES" : "NO";
}

int main(int argc, char **argv) {
	int n;
	cin >> n;

	while (n--) {
		string bracketString;

		cin >> bracketString;

		cout << isBalanced(bracketString) << endl;
	}

	return 0;
}
