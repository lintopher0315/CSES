#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m;
    vector<int> adj[n];
    queue<int> q;
    vector<int> p(n, -1);
    for (int i=0; i<m; ++i) {
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    q.push(0);
    p[0]=0;
    while (!q.empty()) {
        int t=q.front(); q.pop();
        if (t==n-1) {
            vector<int> s;
            while (t) {
                s.push_back(t+1);
                t=p[t];
            }
            s.push_back(1);
            reverse(s.begin(), s.end());
            cout << s.size() << "\n";
            for (int i : s) cout << i << " ";
            return 0;
        }
        for (int i=0; i<adj[t].size(); ++i) {
            if (p[adj[t][i]]<0) {
                q.push(adj[t][i]);
                p[adj[t][i]]=t;
            }
        }
    }
    cout << "IMPOSSIBLE";
}

