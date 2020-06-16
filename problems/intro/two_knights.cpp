#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << 0 << "\n";
    int pre=0;
    for (int i=2; i<=n; ++i) {
        int s=i*i;
        long long p=(long long)s*(s-1)/2;
        if (i==2) {
            cout << p << "\n";
            continue;
        }
        cout << p-(pre+(i-2)*8) << "\n";
        pre=pre+(i-2)*8;
    }
}

