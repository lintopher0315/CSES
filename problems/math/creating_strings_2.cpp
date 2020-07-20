#include <bits/stdc++.h>

using namespace std;

const int MOD=1e9+7;
int f[26];

int fact(int n) {
    long long ans=1;
    while (n>0) {
        ans=(ans*n)%MOD;
        --n;
    }
    return ans;
}

int egcd(int a, int b, int& x, int& y) {
    if (!a) {
        x=0;
        y=1;
        return b;
    }
    int x1, y1;
    int gcd=egcd(b%a, a, x1, y1);
    x=y1-(b/a)*x1;
    y=x1;
    return gcd;
}

int main() {
    string n;
    cin >> n;
    for (char a : n) {
        ++f[a-'a'];
    }
    int t=fact(n.size());
    long long d=1;
    for (int i=0; i<26; ++i) {
        if (!f[i]) continue; 
        d=(d*fact(f[i]))%MOD;
    }
    int x, y;
    egcd(d, MOD, x, y);
    d=(x%MOD+MOD)%MOD;
    cout << (t*d)%MOD;
}

