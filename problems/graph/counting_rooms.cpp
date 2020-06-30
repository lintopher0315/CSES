#include <bits/stdc++.h>

using namespace std;

void fill(vector<vector<char>>& v, int n, int m) {
    if (n<0 || n>=v.size() || m<0 || m>=v[0].size() || v[n][m]=='#') return;
    v[n][m]='#';
    fill(v, n-1, m);
    fill(v, n+1, m);
    fill(v, n, m-1);
    fill(v, n, m+1);
}

int main() {
    int n, m, ans=0;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            cin >> v[i][j];
        }
    }
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            if (v[i][j]=='.') {
                ++ans;
                fill(v, i, j);
            }
        }
    }
    cout << ans;
}

