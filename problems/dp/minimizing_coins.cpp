#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> v(x+1, x+1);
    v[0]=0;
    for (int i=0; i<n; ++i) {
        int a;
        cin >> a;
        for (int j=a; j<x+1; ++j) {
            v[j]=min(v[j-a]+1, v[j]);
        }
    }
    cout << (v[x]==x+1 ? -1 : v[x]);
}

