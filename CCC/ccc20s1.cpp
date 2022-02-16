#include <bits/stdc++.h>
using namespace std;

pair<double, double> a[100002];
int n;
double res = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);

    for (int i = 1; i < n; i++) {
        res = max(res, abs(a[i].second - a[i - 1].second) / (a[i].first - a[i - 1].first));
    }

    cout << res << "\n";
}