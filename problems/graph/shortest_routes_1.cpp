#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a, b, c;
    cin >> n >> m;
    vector<pair<int, int>> adj[n];
    long long dist[n];
    bool f[n]={0};
    for (int i=0; i<m; ++i) {
        cin >> a >> b >> c;
        adj[a-1].push_back({b-1, c});
    }
    for (int i=0; i<n; ++i) dist[i]=LLONG_MAX;
    dist[0]=0;
    priority_queue<pair<long long, int>> pq;
    pq.push({0, 0});
    while (!pq.empty()) {
        int node=pq.top().second; pq.pop();
        if (f[node]) continue;
        f[node]=1;
        for (auto a : adj[node]) {
            int ne=a.first, d=a.second;
            if (dist[node]+d<dist[ne]) {
                dist[ne]=dist[node]+d;
                pq.push({-dist[ne], ne});
            }
        }
    }
    for (auto a : dist) cout << a << " ";
}

