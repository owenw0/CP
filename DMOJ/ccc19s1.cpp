#include <bits/stdc++.h>
using namespace std;

vector<int> grid = { 1, 2, 3, 4 };
string sequence;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> sequence;
    for (int i = 0; i < size(sequence); i++) {
        if (sequence[i] == 'V') {
            swap(grid[0], grid[1]);
            swap(grid[2], grid[3]);
        }
        else {
            swap(grid[0], grid[2]);
            swap(grid[1], grid[3]);
        }
    }

    cout << grid[0] << " " << grid[1] << "\n";
    cout << grid[2] << " " << grid[3] << "\n";
}