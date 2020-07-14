#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, a;
    long long s=0, ans=0;
    cin >> n >> x;
    map<long long, int> m{{0, 1}};
    for (int i=0; i<n; ++i) {
        cin >> a;
        s+=a;
        ans+=m[s-x];
        ++m[s];
    }
    cout << ans;
}

