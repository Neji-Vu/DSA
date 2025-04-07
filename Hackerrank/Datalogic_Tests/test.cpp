/***********************************************
 * file:        test.cpp
 * date:        2025 mar 24 00:42:46
 * description: basic c++ program template
 ***********************************************/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string FirstSolution(string str) {
	const string data = "datalogic";
	string ret;
	vector<int> idx;

	for (int i = 0; i < str.length() - data.length(); ++i) {
		int cnt = 0;
		for (int j = 0; j < data.length(); ++j) {
			if (str[i + j] != data[j]) {
				break;
			} else {
				cnt++;
			}
		}
		if (cnt == data.length()) {
			idx.push_back(i);
			i = i + data.length() - 1;
		}
	}
	int j = idx[0];
	for (int i = 0; i < str.length(); ++i) {
		if (i == j) {
			ret += data;
			i = i + data.length() - 1;
			++j;
		} else {
			ret += '*';
		}
	}
	return ret;
}

int main(int argc, char **argv) {
	string str;
	getline(cin, str);

	cout << FirstSolution(str);

	return 0;
}
