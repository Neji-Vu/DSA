/***********************************************
 * File:        CircularArrayRotation.cpp
 * Date:        2025 Feb 25 15:38:51
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

struct Node {
	struct Node *next;
	struct Node *prev;
	int value;
	Node(int value) : prev(nullptr), next(nullptr), value(value) {}
};

int main(int argc, char **argv) {
	struct Node *head = nullptr, *p = nullptr;
	int n, k, q, queries[100000], temp, a[100000];

	cin >> n >> k >> q;
	// for (int i = 0; i < n; i++) {
	// 	cin >> temp;
	// 	Node *newNode = new Node(temp);
	// 	if (i == 0)
	// 		p = head = newNode;
	// 	else {
	// 		newNode->prev = p;
	// 		p->next = newNode;
	// 		p = p->next;
	// 	}
	// }
	// p->next = head;
	// head->prev = p;
	//
	// for (int i = 0; i < q; i++) {
	// 	cin >> queries[i];
	// }
	//
	// while (k--)
	// 	head = head->prev;

	for (int i = 0; i < n; i++)
		cin >> a[(i + k) % n];

	for (int i = 0; i < q; i++) {
		int temp;
		cin >> temp;
		cout << a[temp] << endl;
	}

	return 0;
}
