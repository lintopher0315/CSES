#include <bits/stdc++.h>

using namespace std;

const int MN=2e5;
vector<int> adj[MN];

pair<int, int> dfs(int s, int p) {
    if (adj[s].size()==1 && adj[s][0]==p) return {0, 0};
    pair<int, int> ans={1, 0};
    int m=INT_MAX;
    for (int a : adj[s]) {
        if (a==p) continue;
        auto ch=dfs(a, s);
        ans.first+=ch.first;
        ans.second+=max(ch.first, ch.second);
        m=min(m, ch.first-ch.second);
    }
    ans.first-=m;
    return ans; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, a, b;
    cin >> n;
    for (int i=0; i<n-1; ++i) {
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    auto ans=dfs(0, -1);
    cout << max(ans.first, ans.second);
}

