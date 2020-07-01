#include <bits/stdc++.h>
 
using namespace std;
 
const int dx[4]={-1, 1, 0, 0};
const int dy[4]={0, 0, -1, 1};
const string ds="LRUD";
 
int main() {
    int n, m, x, y;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    vector<vector<int>> k(n, vector<int>(m));
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            cin >> v[i][j];
            if (v[i][j]=='A') {
                x=j, y=i;
            }
        }
    }
    queue<pair<int, int>> q;
    q.push({x, y});
    while (!q.empty()) {
        auto c=q.front(); q.pop();
        int a=c.first, b=c.second;
        if (v[b][a]=='B') {
            string p;
            cout << "YES\n";
            while (b!=y || a!=x) {
                int i=k[b][a]-1;
                a-=dx[i];
                b-=dy[i];
                p+=ds[i];
            }
            reverse(p.begin(), p.end());
            cout << p.length() << "\n" << p;
            return 0;
        }
        v[b][a]='#';
        for (int i=0; i<4; ++i) {
            int nx=a+dx[i], ny=b+dy[i];
            if (nx>=0 && nx<m && ny>=0 && ny<n && v[ny][nx]!='#' && !k[ny][nx]) {
                q.push({nx, ny});
                k[ny][nx]=i+1;
            }
        }
    }
    cout << "NO";
}

