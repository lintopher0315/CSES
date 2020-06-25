#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> v;
    long long t=0, ans=0, a, b=0;
    for (int i=0; i<n; ++i) {
        cin >> a;
        t+=a;
        v.push_back(a);
        while (b<v.size() && t>x) {
            t-=v[b];
            ++b;
        }
        if (t==x) ++ans;
    }
    cout << ans;
}

