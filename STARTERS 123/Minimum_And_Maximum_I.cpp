#include<bits/stdc++.h>
using namespace std;
const int mx = 100005;
vector<int> adj[mx];
int visited[mx];
void bfs(int src) {
    queue<int> q;
    visited[src] = 1;
    q.push(src);
    while (!q.empty()) {
        int head = q.front();
        q.pop();
        cout << head << ' ';
        for (auto child : adj[head]) {
            if (!visited[child]) {
                visited[child] = 1;
                q.push(child);
            }
        }
    }
}
int main {
    int nodes, edges; cin >> nodes >> edges;
    for (int i = 0; i < edges; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int src = 1;
    bfs(src);
    return 0;
}