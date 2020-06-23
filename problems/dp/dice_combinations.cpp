#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v{1, 2, 4, 8, 16, 32};
    if (n<=6) {
        cout << v[n-1];
        return 0;
    }
    int c=6;
    long long tot=63;
    while (c<n-1) {
        v.push_back(tot);
        tot=(tot*2-v[0])%((long long)1e9+7);
        if (tot<0) tot+=(long long)1e9+7;
        v.erase(v.begin());
        ++c;
    }
    cout << tot;
}

