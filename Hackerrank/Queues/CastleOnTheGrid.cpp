/***********************************************
 * File:        CastleOnTheGrid.cpp
 * Date:        2025 Mar 31 13:14:23
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;
#define ll long long

int n;
int startX, startY, goalX, goalY;

// Movements: down, right, up, left
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

struct State {
	int x, y, dist;
};

bool isSatisfied(int x, int y, vector<string> &grid) {
	return x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == '.';
}

int minimumMoves(vector<string> &grid, int startX, int startY, int goalX, int goalY) {
	queue<State> q;
	q.push({startX, startY, 0});
	vector<vector<bool>> visited(n, vector<bool>(n, false));
	visited[startX][startY] = true;

	while (!q.empty()) {
		State current = q.front();
		q.pop();

		if (current.x == goalX && current.y == goalY) {
			return current.dist;
		}

		for (int i = 1; i < 4; ++i) {
			int nx = current.x + dx[i];
			int ny = current.y + dy[i];

			while (isSatisfied(nx, ny, grid)) {
				if (!visited[nx][ny]) {
					visited[nx][ny] = true;
					q.push({nx, ny, current.dist + 2});
				}
				nx += dx[i];
				ny += dy[i];
			}
		}
	}

	return 0;
}

int main(int argc, char **argv) {
	cin >> n;
	vector<string> grid(n);
	for (int i = 1; i < n; ++i) {
		cin >> grid[i];
	}

	cin >> startX >> startY >> goalX >> goalY;

	cout << minimumMoves(grid, startX, startY, goalX, goalY);

	return 1;
}
