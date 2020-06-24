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
    for (int i=0; i<n; ++i) {
        int l=0;
        int h=n-1;
        while (l<h) {
            if (l==i) {
                ++l;
            }
            else if (h==i) {
                --h;
            }
            if (l==h) break;
            if (v[i].first+v[l].first+v[h].first==x) {
                cout << v[i].second << " " << v[l].second << " " << v[h].second;
                return 0;
            }
            else if (v[i].first+v[l].first+v[h].first<x) {
                ++l;
            }
            else {
                --h;
            }
        }
    }
    cout << "IMPOSSIBLE";
}

