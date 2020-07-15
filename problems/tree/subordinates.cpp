#include <bits/stdc++.h>

using namespace std;

const int MN=2e5;
vector<int> adj[MN];
int sub[MN];

void dfs(int s) {
    sub[s]=1;
    for (int a : adj[s]) {
        dfs(a);
        sub[s]+=sub[a];
    }
}

int main() {
    int n, a;
    cin >> n;
    for (int i=1; i<n; ++i) {
        cin >> a;
        adj[a-1].push_back(i);
    }
    dfs(0);
    for (int i=0; i<n; ++i) {
        cout << sub[i]-1 << " ";
    }
}

