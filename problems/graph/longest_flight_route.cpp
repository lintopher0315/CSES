#include <bits/stdc++.h>

using namespace std;

const int MN=1e5;
vector<int> adj[MN];
bool v[MN];
int dp[MN], p[MN];

void dfs(int s, int& n) {
    if (s==n-1) dp[s]=1;
    else dp[s]=INT_MIN;
    v[s]=1;
    for (int a : adj[s]) {
        if (!v[a]) dfs(a, n);
        if (dp[a]+1>dp[s]) {
            dp[s]=dp[a]+1;
            p[s]=a;
        }
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
    if (!v[n-1]) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    cout << dp[0] << "\n";
    int st=0;
    while (st!=n-1) {
        cout << st+1 << " ";
        st=p[st];
    }
    cout << n;
}

