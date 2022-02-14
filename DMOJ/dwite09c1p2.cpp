#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string word;
    for (int i = 0; i < 5; i++) {
        cin >> word;
        do {
            cout << word << "\n";
        } while (next_permutation(word.begin(), word.end()));
    }
}