#include <bits/stdc++.h>

using namespace std;

const int MN=20;
int arr[MN];
long long c, t;
int n;

void dfs(int i, long long s) {
    if (i==n) {
        c=min(c, abs(t-s-s));
        return;
    }
    dfs(i+1, s);
    dfs(i+1, s+arr[i]);
}

int main() {
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        t+=arr[i];
    }
    c=t;
    dfs(0, 0); 
    cout << c;
}

