#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string books;
    cin >> books;

    int totalL = 0, totalM = 0;

    // Book size count
    for (int i = 0; (unsigned)i <= books.length(); i++) {
        if (books[i] == 'L') {
            totalL++;
        }
        else if (books[i] == 'M') {
            totalM++;
        }
    }

    int nonL = 0, nonM = 0;
    int secLMs = 0, secMLs = 0;

    // Find non-L's in secL and M's in secL
    for (int i = 0; i < totalL; i++) {
        if (books[i] != 'L') {
            nonL++;
        }
        if (books[i] == 'M') {
            secLMs++;
        }
    }

    // Find non-M's in secM and L's in secM
    for (int i = totalL; i < totalL + totalM; i++) {
        if (books[i] != 'M') {
            nonM++;
        }
        if (books[i] == 'L') {
            secMLs++;
        }
    }

    cout << nonL + nonM - min(secLMs, secMLs) << "\n";
}
