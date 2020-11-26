#include <bits/stdc++.h>

using namespace std;

const int MOD=1e9+7;
const int MN=1e5;
vector<int> adj[MN];
long long dp[MN];
bool v[MN];

void dfs(int s, int& n) {
    if (s==n-1) dp[s]=1;
    v[s]=1;
    for (int a : adj[s]) {
        if (!v[a]) dfs(a, n); 
        if (dp[a]>0) dp[s]=(dp[s]+dp[a])%MOD;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, a, b;
    cin >> n >> m;
    while (m--) {
        cin >> a >> b;
        adj[a-1].push_back(b-1);
    }
    dfs(0, n);
    cout << dp[0];
}

