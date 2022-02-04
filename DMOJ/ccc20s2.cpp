#include <bits/stdc++.h>
using namespace std;

class Cell {
public:
    int r, c;
};

bool visited[1010][1010];
vector<vector<Cell>> vals(1000010);

string solution(Cell last_cell) {
    queue<Cell> q;
    q.push(last_cell);
    while (!q.empty()) {
        Cell cell = q.front();
        q.pop();
        vector<Cell> neighbors = vals[cell.r * cell.c];
        for (Cell neighbor : neighbors) {
            if (neighbor.r == 1 && neighbor.c == 1) {
                return "yes";
            }
            else if (!visited[neighbor.r][neighbor.c]) {
                visited[neighbor.r][neighbor.c] = true;
                q.push(neighbor);
            }
        }
    }
    return "no";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int rows, cols; cin >> rows >> cols;
    Cell last_cell;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            int val; cin >> val;
            Cell cell;
            cell.r = i; cell.c = j;
            vals[val].push_back(cell);

            if (i == rows && j == cols) {
                last_cell = cell;
            }
        }
    }
    cout << solution(last_cell) << "\n";
}