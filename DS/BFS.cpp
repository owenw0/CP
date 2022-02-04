#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    int nodes;
    vector<int>* adj;

    Graph(int n) {
        nodes = n;
        adj = new vector<int>[n];
    }

    void addEdge(int node1, int node2) {
        adj[node1].push_back(node2);
    }

    void bfs(int start) {
        bool visited[nodes];
        for (int i = 0; i < nodes; i++) {
            visited[i] = false;
        }
        visited[start] = true;

        queue<int> q;
        q.push(start);
        while (!q.empty()) {
            start = q.front();
            cout << start << " ";
            q.pop();

            for (auto i = adj[start].begin(); i != adj[start].end(); i++) {
                if (!visited[*i]) {
                    visited[*i] = true;
                    q.push(*i);
                }
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Graph graph(4);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 0);
    graph.addEdge(2, 3);
    graph.addEdge(3, 3);

    graph.bfs(2);
    cout << "\n";
}