#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;

    void addEdge(int node1, int node2) {
        adj[node1].push_back(node2);
    }

    void dfs(int start) {
        visited[start] = true;
        cout << start << " ";

        for (auto i = adj[start].begin(); i != adj[start].end(); i++) {
            if (!visited[*i]) {
                dfs(*i);
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.dfs(2);
    cout << "\n";
}