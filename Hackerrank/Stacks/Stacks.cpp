/***********************************************
 * File:        Stacks.cpp
 * Date:        2025 Mar 08 09:25:28
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>

using namespace std;
#define ll long long

template <typename T> class Stack {
	int top;
	int size;
	T *data;

  public:
	Stack() = delete;
	Stack(int size) : size(size), data(new T[size]), top(-1) {}

	Stack(const Stack &st) {
		this->data = st.data;
		this->top = st.top;
		this->size = st.size;
	}

	bool isEmpty() {
		return top == -1;
	}

	bool isFull() {
		return top == size - 1;
	}

	void push(T value) {
		static_assert(isFull(), "Stack overflow");
		data[++top] = value;
	}

	T pop(void) {
		static_assert(isEmpty(), "Stack is empty");
		T temp = data[top--];
		return temp;
	}

	T peek(void) {
		static_assert(isEmpty(), "Stack is empty");
		return data[top];
	}

	int getTop() {
		return top;
	}
};

int main(int argc, char **argv) {
	Stack<int> st(10);

	return 0;
}
