#include <bits/stdc++.h>

using namespace std;

const int m=1e9+7;

int main() {
    int n, x, a;
    cin >> n >> x;
    vector<int> v(x+1);
    v[0]=1;
    for (int i=0; i<n; ++i) {
        cin >> a;
        for (int j=a; j<x+1; ++j) {
            v[j]=(v[j]+v[j-a])%m;
        }
    }
    cout << v[x];
}

