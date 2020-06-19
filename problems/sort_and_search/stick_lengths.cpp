#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int m=n%2 ? v[n/2] : v[n/2-1]+(v[n/2]-v[n/2-1])/2;
    long long ans=0;
    for (int i=0; i<n; ++i) {
        ans+=abs(m-v[i]);
    }
    cout << ans;
}

