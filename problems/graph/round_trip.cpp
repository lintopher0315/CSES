#include <bits/stdc++.h>

using namespace std;

const int mn=1e5;
vector<int> adj[mn];
bool visited[mn];
int parent[mn];

void dfs(int s) {
    visited[s]=1;
    for (int a : adj[s]) {
        if (a==parent[s]) continue;
        if (visited[a]) {
            vector<int> ans{a};
            while (s!=a) {
                ans.push_back(s);
                s=parent[s];
            }
            ans.push_back(a);
            cout << ans.size() << "\n";
            for (int i=ans.size()-1; ~i; --i) {
                cout << ans[i]+1 << " ";
            }
            exit(0);
        }
        parent[a]=s;
        if (!visited[a]) dfs(a);
    }
}

int main() {
    int n, m, a, b;
    cin >> n >> m;
    for (int i=0; i<m; ++i) {
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    for (int i=0; i<n; ++i) {
        if (!visited[i]) dfs(i);
    }
    cout << "IMPOSSIBLE";
}

