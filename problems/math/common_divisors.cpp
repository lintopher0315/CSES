#include <bits/stdc++.h>

using namespace std;

const int MN=1e6;
int freq[MN+1];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, a;
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> a;
        freq[a]++;
    }
    for (int i=MN; i; --i) {
        int c=0;
        for (int j=i; j<=MN; j+=i) {
            c+=freq[j];
        }
        if (c>=2) {
            cout << i;
            return 0;
        }
    }
}

