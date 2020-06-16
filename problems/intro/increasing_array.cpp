#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans=0;
    int p;
    cin >> p;
    for (int i=1; i<n; ++i) {
        int b;
        cin >> b;
        ans+=max(0, p-b);
        p=max(p, b);
    }
    cout << ans;
}

