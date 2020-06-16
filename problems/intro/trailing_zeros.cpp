#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans=0;
    int p=5;
    while (p<=n) {
        ans+=n/p;
        p*=5;
    }
    cout << ans;
}

