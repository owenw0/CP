#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int swifts[n];
    int swifts_score = 0;
    int semaphores[n];
    int semaphores_score = 0;
    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        cin >> swifts[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> semaphores[i];
    }

    for (int i = 0; i < n; i++) {
        swifts_score += swifts[i];
        semaphores_score += semaphores[i];

        if (swifts_score == semaphores_score) {
            int s = i;
            s++;
            scores.push_back(s);
        }
    }
    cout << *max_element(scores.begin(), scores.end());
}
