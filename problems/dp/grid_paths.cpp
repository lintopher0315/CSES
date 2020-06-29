#include <bits/stdc++.h>

using namespace std;

const int m=1e9+7;

int main() {
    int n;
    char a;
    cin >> n;
    vector<int> v(n+1);
    v[0]=1;
    for (int i=0; i<n; ++i) {
        for (int j=1; j<n+1; ++j) {
            cin >> a;
            if (a=='*') v[j]=0;
            else v[j]=(v[j]+v[j-1])%m;
        }
        v[0]=0;
    }
    cout << v[n];
}

