#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int ans=0;
    for (int i=0; i<n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i=0;
    int j=n-1;
    while (i<j) {
        if (v[i]+v[j]<=x) {
            ++i;
        }
        --j;
        ++ans;
    }
    if (i==j) ++ans;
    cout << ans;
}

