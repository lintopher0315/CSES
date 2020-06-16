#include <bits/stdc++.h>

using namespace std;

int m=1e9+7;

int main() {
    int n;
    cin >> n;
    long long ans=1;
    long long b=2;
    while (n>0) {
        if (n%2) {
            ans=(ans*b)%m;
        }
        b=(b*b)%m;
        n/=2;
    }
    cout << ans;
}

