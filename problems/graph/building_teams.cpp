#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m;
    vector<int> adj[n];
    int g[n]={0};
    queue<int> q;
    for (int i=0; i<m; ++i) {
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    for (int j=0; j<n; ++j) {
        if (g[j]) continue;
        q.push(j);
        g[j]=1;
        while (!q.empty()) {
            int f=q.front(); q.pop();
            for (int i=0; i<adj[f].size(); ++i) {
                if (g[adj[f][i]]==g[f]) {
                    cout << "IMPOSSIBLE";
                    return 0;
                }
                if (!g[adj[f][i]]) {
                    g[adj[f][i]]=3-g[f];
                    q.push(adj[f][i]);
                }
            }
        }
    }
    for (int i=0; i<n; ++i) {
        cout << g[i] << " ";
    }
}

