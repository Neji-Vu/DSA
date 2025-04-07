/***********************************************
 * File:        SimpleTextEditor.cpp
 * Date:        2025 Mar 13 11:11:28
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <stack>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	string str = "";
	int k, ops;
	stack<string> undo;
	undo.push("");
	cin >> k;

	while (k--) {
		cin >> ops;
		switch (ops) {
		case 1: {
			string arg;
			cin >> arg;
			str.append(arg);
			undo.push(str);
			break;
		}
		case 2: {
			int k;
			cin >> k;
			str.erase(str.length() - k);
			undo.push(str);
			break;
		}
		case 3: {
			int k;
			cin >> k;
			cout << str[k - 1] << endl;
			break;
		}
		case 4: {
			undo.pop();
			if (!undo.empty())
				str = undo.top();
			break;
		}
		default:
			break;
		}
	}

	return 0;
}
