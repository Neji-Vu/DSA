/***********************************************
 * File:        LargestRectangle.cpp
 * Date:        2025 Mar 08 18:31:38
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <stack>

using namespace std;
#define ll long long

const int mxN = 2e5;

int main(int argc, char **argv) {
	int n;
	cin >> n;
	int heights[mxN];
	for (int i = 0; i < n; ++i) {
		cin >> heights[i];
	}

	int maxArea = 0;
	stack<int> st;

	for (int i = 0; i <= n; ++i) {
		int height = n == i ? 0 : heights[i];
		while (!st.empty() && heights[st.top()] > height) {
			int h = heights[st.top()];
			st.pop();
			// st.top() + 1 to calc the weight
			// (after popping the stack so needing to add 1)
			int w = st.empty() ? i : i - (st.top() + 1);
			maxArea = max(maxArea, h * w);
		}
		st.push(i);
	}

	cout << maxArea;

	return 0;
}
