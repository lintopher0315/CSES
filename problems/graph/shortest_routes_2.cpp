#include <bits/stdc++.h>

using namespace std;

const long long INF=1e18;

int main() {
    int n, m, q, a, b, c;
    cin >> n >> m >> q;
    vector<vector<long long>> adj(n, vector<long long>(n, INF));
    for (int i=0; i<m; ++i) {
        cin >> a >> b >> c;
        adj[a-1][b-1]=min(adj[a-1][b-1], (long long)c);
        adj[b-1][a-1]=min(adj[b-1][a-1], (long long)c);
    }
    for (int i=0; i<n; ++i) adj[i][i]=0;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            for (int k=0; k<n; ++k) {
                adj[j][k]=min(adj[j][k], adj[j][i]+adj[i][k]);
            }
        }
    }
    for (int i=0; i<q; ++i) {
        cin >> a >> b;
        cout << (adj[a-1][b-1]<INF ? adj[a-1][b-1] : -1) << "\n";
    }
}

