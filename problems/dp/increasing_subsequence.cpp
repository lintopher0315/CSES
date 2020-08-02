#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector<int> dp;
    for (int i=0; i<n; ++i) {
        cin >> a;
        auto it=lower_bound(dp.begin(), dp.end(), a);
        if (it!=dp.end()) {
            *it=a;
        }
        else {
            dp.push_back(a);
        }
    }
    cout << dp.size();
}

