#include <bits/stdc++.h>

using namespace std;

const int MN=1e5;
const int MOD=1e9+7;
vector<pair<int, int>> adj[MN];
array<long long, 3> dp[MN];
long long dist[MN];
bool v[MN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, a, b, c;
    cin >> n >> m;
    while (m--) {
        cin >> a >> b >> c;
        adj[a-1].push_back({b-1, c});
    }
    for (int i=0; i<n; ++i) {
        dist[i]=LLONG_MAX;
        dp[i][1]=INT_MAX;
    }
    dist[0]=0;
    dp[0]={1, 0, 0};
    priority_queue<pair<long long, int>> pq;
    pq.push({0, 0});
    while (!pq.empty()) {
        int t=pq.top().second; pq.pop();
        if (v[t]) continue;
        v[t]=1;
        for (auto p : adj[t]) {
            int ne=p.first, d=p.second;
            if (dist[t]+d<dist[ne]) {
                dist[ne]=dist[t]+d;
                pq.push({-dist[ne], ne});
                dp[ne][0]=dp[t][0];
                dp[ne][1]=dp[t][1]+1;
                dp[ne][2]=dp[t][2]+1;
            }
            else if (dist[t]+d==dist[ne]) {
                dp[ne][0]=(dp[ne][0]+dp[t][0])%MOD;
                dp[ne][1]=min(dp[ne][1], dp[t][1]+1);
                dp[ne][2]=max(dp[ne][2], dp[t][2]+1);
            }
        }
    }
    cout << dist[n-1] << " " << dp[n-1][0] << " " << dp[n-1][1] << " " << dp[n-1][2] << "\n";
}

