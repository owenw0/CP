#include <bits/stdc++.h>
using namespace std;

vector<string> permutations;

void permute(string word, int letter, int length) {
    if (letter == length) {
        permutations.push_back(word);
    }
    else {
        for (int i = letter; i <= length; i++) {
            swap(word[letter], word[i]);
            permute(word, letter + 1, length);
            swap(word[letter], word[i]);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string word;
    for (int i = 0; i < 5; i++) {
        cin >> word;
        permute(word, 0, word.size() - 1);
    }

    sort(permutations.begin(), permutations.end(),
        [](const string& lhs, const string& rhs) {
            return lhs.size() == rhs.size() ?
                lhs < rhs : lhs.size() < rhs.size(); });

    for (const auto& permutation : permutations) {
        cout << permutation << "\n";
    }
}