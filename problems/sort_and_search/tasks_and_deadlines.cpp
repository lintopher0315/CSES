#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long ans=0, t=0;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i=0; i<n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    for (int i=0; i<n; ++i) {
        t+=v[i].first;
        ans+=v[i].second-t;
    }
    cout << ans;
}

