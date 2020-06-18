#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);
    for (int i=0; i<n; ++i) {
        cin >> v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(), v.end());
    int l=0;
    int h=n-1;
    while (l<h) {
        if (v[l].first+v[h].first==x) {
            cout << v[l].second << " " << v[h].second;
            return 0;
        }
        else if (v[l].first+v[h].first>x) {
            --h;
        }
        else {
            ++l;
        }
    }
    cout << "IMPOSSIBLE";
}

