#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a;
    long long s=0, ans=0;
    cin >> n;
    map<int, int> m{{0, 1}};
    for (int i=0; i<n; ++i) {
        cin >> a;
        s=((s+a)%n+n)%n;
        ans+=m[s];
        ++m[s];
    }
    cout << ans;
}

