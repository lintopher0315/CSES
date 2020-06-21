#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        v[i]={a, b};
    }
    sort(v.begin(), v.end(), [](pair<int, int> &left, pair<int, int> &right) {
        return left.second<right.second;
    });
    int ans=0;
    int e=0;
    for (int i=0; i<n; ++i) {
        if (v[i].first>=e) {
            e=v[i].second;
            ++ans;
        }
    }
    cout << ans;
}

