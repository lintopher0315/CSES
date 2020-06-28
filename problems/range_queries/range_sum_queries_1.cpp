#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, a, b;
    cin >> n >> q;
    vector<long long> v;
    long long t=0;
    for (int i=0; i<n; ++i) {
        cin >> a;
        t+=a;
        v.push_back(t);
    }
    for (int i=0; i<q; ++i) {
        cin >> a >> b;
        cout << v[b-1]-(a==1 ? 0 : v[a-2]) << "\n";
    }
}

