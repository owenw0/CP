#include <bits/stdc++.h>
using namespace std;

vector<int> arr(100000);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    if (n == 1 || n == 2 || n == 3 || n == 6 || n == 7) {
        cout << 0;
    }
    else if (n == 4 || n == 5 || n == 9 || n == 10 || n == 8) {
        cout << 1;
    }
    else if (n % 5 == 0) {
        int c = 1;

        for (int i = 0; i < n / 5; i++) {
            if ((n - (i * 5)) % 4 == 0) {
                c++;
            }
        }

        cout << c << "\n";
    }
    else if (n % 4 == 0) {
        int c = 1;

        for (int i = 0; i < n / 4; i++) {
            if ((n - (i * 4)) % 5 == 0) {
                c++;
            }
        }

        cout << c << "\n";
    }
}
