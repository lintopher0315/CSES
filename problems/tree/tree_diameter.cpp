#include <bits/stdc++.h>

using namespace std;

const int MN=2e5;
vector<int> adj[MN];
int leaf[MN];
int ans;

void dfs(int s, int p) {
    for (int a : adj[s]) {
        if (a==p) continue;
        dfs(a, s);
        ans=max(ans, leaf[s]+leaf[a]+1);
        leaf[s]=max(leaf[s], leaf[a]+1);
    }
}

int main() {
    int n, a, b;
    cin >> n;
    for (int i=0; i<n-1; ++i) {
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    dfs(0, -1);
    cout << ans;
}

