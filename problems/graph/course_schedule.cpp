#include <bits/stdc++.h>

using namespace std;

const int MN=1e5;
vector<int> adj[MN];
vector<int> ans;
int st[MN];

void dfs(int s) {
    st[s]=1;
    for (int a : adj[s]) {
        if (st[a]==1) {
            cout << "IMPOSSIBLE";
            exit(0);
        }
        if (!st[a]) dfs(a);
    }
    ans.push_back(s);
    st[s]=2;
}

int main() {
    int n, m, a, b;
    cin >> n >> m;
    for (int i=0; i<m; ++i) {
        cin >> a >> b;
        adj[b-1].push_back(a-1);
    }
    for (int i=0; i<n; ++i) {
        if (!st[i]) dfs(i);
    }
    for (int a : ans) cout << a+1 << " ";
}
