#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    else if (n <= 3) {
        return true;
    }
    else if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int avg; cin >> avg;
        avg *= 2;
        for (int i = 2; i < avg; i++) {
            if (isPrime(i) == true && isPrime(avg - i) == true) {
                cout << i << " " << avg - i << "\n";
                break;
            }
        }
    }
}