#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i=0; i<n; ++i) cin >> v[i];
    multiset<int> ms(v.begin(), v.begin()+k);
    auto mid=next(ms.begin(), (k-1)/2);
    for (int i=k; i<n; ++i) {
        cout << *mid << " ";
        ms.insert(v[i]);
        if (v[i]<*mid) --mid;
        if (v[i-k]<=*mid) ++mid;
        ms.erase(ms.lower_bound(v[i-k]));
    }
    cout << *mid;
}

