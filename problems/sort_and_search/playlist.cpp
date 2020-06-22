#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    int ans=0;
    int start=0;
    for (int i=0; i<n; ++i) {
        int a;
        cin >> a;
        if (m.count(a) && m[a]>=start) {
            start=m[a]+1;
        }
        m[a]=i;
        ans=max(ans, i-start+1);
    }
    cout << ans;
}

