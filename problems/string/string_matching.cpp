#include <bits/stdc++.h>

using namespace std;

const int MN=1e6;
int pre[MN];

void preprocess(string m) {
    pre[0]=0;
    int i=0, j=1;
    while (j<m.size()) {
        if (m[i]==m[j]) {
            pre[j]=i+1;
            ++i;
            ++j;
        }
        else {
            if (i) {
                i=pre[i-1];
            }
            else {
                pre[j]=0;
                ++j;
            }
        }
    }
}

int main() {
    string n, m;
    int ans=0;
    cin >> n >> m;
    preprocess(m);
    int i=0;
    for (int j=0; j<n.size(); ++j) {
        if (n[j]==m[i]) {
            ++i;
            if (i==m.size()) {
                ++ans;
                i=pre[i-1];
            }
        }
        else if (i>0) {
            i=pre[i-1];
            --j;
        }
    }
    cout << ans;
}

