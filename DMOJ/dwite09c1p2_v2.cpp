#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    for (int i = 0; i < 5; i++) {
        cin >> str;
        do {
            cout << str << "\n";
        } while (next_permutation(str.begin(), str.end()));
    }
}