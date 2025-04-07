/***********************************************
 * File:        PreorderTraversal.cpp
 * Date:        2025 Mar 07 22:09:53
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

template <typename T> struct Node {
	T data;
	Node *left;
	Node *right;

	Node(T data) : data(data), left(nullptr), right(nullptr) {}
};

template <typename T> class BinaryTree {
	Node<T> *root;
	Node<T> *insertRecursive(Node<T> *current, T value);
	void displayPreorderRecursive(Node<T> *current);

  public:
	BinaryTree<T>() : root(nullptr) {}

	void insertNodeRecursive(T value);
	void displayPreorderTraversal();
};

template <typename T>
Node<T> *BinaryTree<T>::insertRecursive(Node<T> *current, T value) {
	if (current == nullptr)
		return new Node<T>(value);

	if (current->data >= value) {
		current->left = insertRecursive(current->left, value);
	} else {
		current->right = insertRecursive(current->right, value);
	}
	return current;
}

template <typename T> void BinaryTree<T>::insertNodeRecursive(T value) {
	root = insertRecursive(root, value);
}

template <typename T>
void BinaryTree<T>::displayPreorderRecursive(Node<T> *current) {
	if (current != nullptr) {
		cout << current->data << " ";
		displayPreorderRecursive(current->left);
		displayPreorderRecursive(current->right);
	}
}

template <typename T> void BinaryTree<T>::displayPreorderTraversal() {
	displayPreorderRecursive(root);
}

int main(int argc, char **argv) {
	BinaryTree<int> tree;
	int t, data;

	cin >> t;
	while (t--) {
		cin >> data;
		tree.insertNodeRecursive(data);
	}

	tree.displayPreorderTraversal();

	return 0;
}
