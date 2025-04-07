/***********************************************
 * File:        QueueUsingTwoStacks.cpp
 * Date:        2025 Mar 31 12:10:14
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <stack>

using namespace std;
#define ll long long

int main(int argc, char **argv) {
	int q, type;
	stack<int> deQ, enQ;

	cin >> q;

	while (q--) {
		cin >> type;
		switch (type) {
		case 1:
			int temp;
			cin >> temp;
			enQ.push(temp);
			break;
		case 2:
		case 3:
			if (deQ.empty()) {
				if (enQ.empty()) {
					cerr << "Queue is empty\n";
				} else {
					while (!enQ.empty()) {
						deQ.push(enQ.top());
						enQ.pop();
					}
				}
			}
			if (type == 2)
				deQ.pop();
			else
				cout << deQ.top() << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}
