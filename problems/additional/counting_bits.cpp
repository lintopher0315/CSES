#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, t=0, p=1;
    cin >> n;
    while (p<=n) {
        t+=((n+1)/(2*p)*p);
        t+=max(0LL, (n+1)%(2*p)-p);
        p<<=1;
    }
    cout << t;
}

