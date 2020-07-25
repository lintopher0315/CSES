#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<vector<int>> dp(a, vector<int>(b, INT_MAX));
    for (int i=0; i<a; ++i) {
        for (int j=0; j<b; ++j) {
            if (i==j) dp[i][j]=0;
            else {
                for (int x=0; x<j; ++x) {
                    dp[i][j]=min(dp[i][j], dp[i][j-x-1]+dp[i][x]+1);
                }
                for (int y=0; y<i; ++y) {
                    dp[i][j]=min(dp[i][j], dp[i-y-1][j]+dp[y][j]+1);
                }
            }
        }
    }
    cout << dp[a-1][b-1];
}

