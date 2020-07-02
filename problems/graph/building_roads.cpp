#include <bits/stdc++.h>

using namespace std;

const int mn=1e5;
vector<int> adj[mn];
bool visited[mn];

void dfs(int s) {
    visited[s]=1;
    for (int i=0; i<adj[s].size(); ++i) {
        if (!visited[adj[s][i]]) dfs(adj[s][i]);
    } 
}

int main() {
    int n, m, a, b;
    vector<int> v;
    cin >> n >> m;
    for (int i=0; i<m; ++i) {
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    for (int i=0; i<n; ++i) {
        if (!visited[i]) {
            if (i) v.push_back(i+1);
            dfs(i);
        }
    }
    cout << v.size() << "\n";
    for (int i : v) cout << 1 << " " << i << "\n";
}

