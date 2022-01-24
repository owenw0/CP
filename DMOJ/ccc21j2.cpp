#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string names[101];
    int bids[101];
    int max = 0;
    string max_name;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> names[i];
        cin >> bids[i];
    }

    for (int i = 0; i < n; i++) {
        if (bids[i] > max) {
            max = bids[i];
            max_name = names[i];
        }
    }
    cout << max_name;
}
