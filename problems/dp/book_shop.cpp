#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);
    for (int i=0; i<n; ++i) cin >> v[i].first;
    for (int i=0; i<n; ++i) cin >> v[i].second;
    vector<int> ans(x+1);
    for (int i=1; i<n+1; ++i) {
        for (int j=x; j>=v[i-1].first; --j) {
            ans[j]=max(ans[j-v[i-1].first]+v[i-1].second, ans[j]);
        }
    }
    cout << ans[x];
}

