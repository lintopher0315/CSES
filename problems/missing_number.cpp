#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long t=(long long)n*(n+1)/2;
    for (int i=0; i<n-1; ++i) {
        int a;
        cin >> a;
        t-=a;
    }
    cout << t;
}

