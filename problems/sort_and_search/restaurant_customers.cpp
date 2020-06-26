#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i=0; i<n; ++i) {
        cin >> a >> b;
        v.push_back({a, 0});
        v.push_back({b, 1});
    }
    sort(v.begin(), v.end());
    int c=0, m=0;
    for (int i=0; i<n*2; ++i) {
        if (!v[i].second) {
            ++c;
            m=max(c, m);
        }
        else {
            --c;
        }
    }
    cout << m;
}

