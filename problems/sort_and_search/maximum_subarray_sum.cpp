#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans=0;
    long long c=0;
    int m=INT_MIN;
    for (int i=0; i<n; ++i) {
        int a;
        cin >> a;
        c+=a;
        c=max(c, 0LL);
        ans=max(ans, c);
        m=max(m, a);
    }
    if (m<0) {
        cout << m;
    }
    else {
        cout << ans;
    }
}

