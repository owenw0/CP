#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int b;

    cin >> b;
    int p = 5 * b - 400;
    cout << p << "\n";
    if (p < 100) {
        cout << 1;
    }
    else if (p > 100) {
        cout << -1;
    }
    else {
        cout << 0;
    }
    return 0;
}
