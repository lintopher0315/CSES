#include <bits/stdc++.h>

using namespace std;

const int MN=1e5;
vector<int> adj[MN];
int v[MN];
int p[MN];

void dfs(int s) {
    v[s]=1;
    for (int a : adj[s]) {
        if (v[a]==1) {
            vector<int> ans{a};
            while (s!=a) {
                ans.push_back(s);
                s=p[s];
            }
            ans.push_back(a);
            cout << ans.size() << "\n";
            for (int i=ans.size()-1; ~i; --i) {
                cout << ans[i]+1 << " ";
            }
            exit(0);
        }
        p[a]=s;
        if (!v[a]) dfs(a);
    }
    v[s]=2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, a, b;
    cin >> n >> m;
    for (int i=0; i<m; ++i) {
        cin >> a >> b;
        adj[a-1].push_back(b-1);
    }
    for (int i=0; i<n; ++i) {
        if (!v[i]) dfs(i);
    }
    cout << "IMPOSSIBLE";
}

