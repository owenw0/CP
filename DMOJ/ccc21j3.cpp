#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string num;
    string prev;

    cin >> num;
    while (num != "99999") {
        int sum = (num[0] - '0') + (num[1] - '0');

        if (sum % 2 == 1) {
            cout << "left ";
            prev = "left ";
        }
        else if (sum == 0) {
            cout << prev;
        }
        else {
            cout << "right ";
            prev = "right ";
        }
        cout << num[2] << num[3] << num[4] << "\n";

        cin >> num;
    }
}
