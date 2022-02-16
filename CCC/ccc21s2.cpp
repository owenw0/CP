#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n, k;
    cin >> m >> n >> k;

    unordered_set<int> row;
    unordered_set<int> col;

    for (int i = 0; i < k; ++i) {
        char c;
        int x;
        cin >> c >> x;

        if (c == 'R') {
            if (row.find(x) == row.end()) {
                row.emplace(x);
            }
            else {
                row.erase(x);
            }
        }
        else {
            if (col.find(x) == col.end()) {
                col.emplace(x);
            }
            else {
                col.erase(x);
            }
        }
    }
    int total = 0;
    total += col.size() * m;
    total += row.size() * n;
    total -= 2 * row.size() * col.size();

    cout << total << "\n";
}
