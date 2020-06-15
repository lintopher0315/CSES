#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        int y, x;
        cin >> y >> x;
        long long m=(long long)max(x, y)*(max(x, y)-1)+1;
        if (y==x) {
            cout << m << "\n";
            continue;
        }
        else {
            int f=y<x ? 1 : -1;
            f*=max(x, y)%2 ? max(x, y)-min(x, y) : -1*(max(x, y)-min(x, y));
            m+=f;
            cout << m << "\n";
        }
    }
}

