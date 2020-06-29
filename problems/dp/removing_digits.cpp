#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans;
    cin >> n;
    while (n) {
        int c=n;
        int m=0;
        while (c) {
            m=max(m, c%10);
            c/=10;
        }
        n-=m;
        ++ans;
    }
    cout << ans;
}

