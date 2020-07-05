#include <bits/stdc++.h>

using namespace std;

int main() {
    string n, m;
    cin >> n >> m;
    int h=n.size(), w=m.size(), p, c;
    vector<int> v(w+1);
    for (int i=1; i<w+1; ++i) v[i]=i;
    for (int i=1; i<=h; ++i) {
        p=v[0];
        v[0]=i;
        for (int j=1; j<=w; ++j) {
            c=v[j];
            if (n[i-1]==m[j-1]) {
                v[j]=p;
            }
            else {
                v[j]=min({p, v[j-1], v[j]})+1;
            }
            p=c;
        }
    }
    cout << v[w];
}

