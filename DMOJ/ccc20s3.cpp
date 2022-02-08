#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n; cin >> n;
    string h; cin >> h;
    int c = 0;

    if (h.find(n) != string::npos) {
        c++;
    }

    while (next_permutation(n.begin(), n.end())) {
        if (h.find(n) != string::npos) {
            c++;
        }
    }

    cout << c << "\n";
}