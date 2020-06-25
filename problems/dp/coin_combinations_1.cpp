#include <bits/stdc++.h>

using namespace std;

const int m=1e9+7;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> v(x+1), c(n);
    for (int i=0; i<n; ++i) {
        cin >> c[i];
    }
    v[0]=1;
    for (int i=1; i<x+1; ++i) {
        for (int j=0; j<n; ++j) {
            if (i>=c[j]) v[i]=(v[i]+v[i-c[j]])%m;
        }
    }
    cout << v[x];
}

