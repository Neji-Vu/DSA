/***********************************************
 * File:        ClimbingTheLeaderBoard.cpp
 * Date:        2025 Feb 24 16:49:56
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <stack>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	unsigned long n, m, i, tmp;
	cin >> n;
	stack<unsigned long> scores;
	for (i = 0; i < n; ++i) {
		cin >> tmp;
		if (scores.empty() || scores.top() != tmp)
			scores.push(tmp);
	}
	cin >> m;
	for (i = 0; i < m; ++i) {
		cin >> tmp;
		while (!scores.empty() && tmp >= scores.top())
			scores.pop();
		cout << (scores.size() + 1) << endl;
	}
}
