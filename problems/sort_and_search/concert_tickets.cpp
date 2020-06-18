#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m;
    multiset<int, greater<int>> s;
    for (int i=0; i<n; ++i) {
        cin >> a;
        s.insert(a);
    }
    for (int i=0; i<m; ++i) {
        cin >> a;
        auto f=s.lower_bound(a);
        if (f==s.end()) {
            cout << -1 << "\n";
        }
        else {
            cout << *f << "\n";
            s.erase(f);
        }
    }
}

