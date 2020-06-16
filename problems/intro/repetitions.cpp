#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;
    int ans=0;
    int m=1;
    char c=a[0];
    for (int i=1; i<a.length(); ++i) {
        if (a[i]==c) {
            ++m;
        }
        else {
            ans=max(m, ans);
            m=1;
            c=a[i];
        }
    }
    ans=max(m, ans);
    cout << ans;
}

