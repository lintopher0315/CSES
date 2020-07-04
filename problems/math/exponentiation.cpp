#include <bits/stdc++.h>

using namespace std;

const int m=1e9+7;

int main() {
    int n, b;
    cin >> n;
    for (int i=0; i<n; ++i) {
        long long a;
        cin >> a >> b;
        long long ans=1;
        while (b) {
            if (b%2) ans=(ans*a)%m;
            a=(a*a)%m;
            b/=2;
        }
        cout << ans << "\n";
    }
}

