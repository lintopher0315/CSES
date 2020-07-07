#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t=0, c=0;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; ++i) {
        cin >> v[i];
        t+=v[i];
    }
    vector<bool> dp(t+1);
    dp[0]=1;
    for (int i=0; i<n; ++i) {
        for (int j=t; j>=v[i]; --j) {
            if (!dp[j] && dp[j-v[i]]) ++c;
            dp[j]=dp[j] | dp[j-v[i]];
        }
    }
    cout << c << "\n";
    for (int i=1; i<t+1; ++i) {
        if (dp[i]) cout << i << " ";
    }
}

