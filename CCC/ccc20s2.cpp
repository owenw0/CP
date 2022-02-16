#include <bits/stdc++.h>
using namespace std;

int M, N, x;
vector<int> adj[1000010];
bool visited[1000010];
queue<int> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N;

    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> x;
            adj[i * j].push_back(x);
        }
    }

    visited[1] = true;
    q.push(1);

    while (!q.empty()) {
        int nv = q.front();
        q.pop();

        for (auto i : adj[nv]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }

        if (nv == M * N) {
            cout << "yes\n";
            return 0;
        }
    }

    cout << "no\n";
}