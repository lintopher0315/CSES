#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n%4==3 || n%4==0) {
        cout << "YES\n";
        if (n%4==0) {
            cout << n/2 << "\n";
            for (int i=0; i<n/4; ++i) {
                cout << i+1 << " " << n-i << " ";
            }
            cout << "\n" << n/2 << "\n";
            for (int i=0; i<n/4; ++i) {
                cout << n/2-i << " " << n/2+1+i << " ";
            }
        }
        else {
            cout << n/2 << "\n3 ";
            for (int i=0; i<(n-3)/4; ++i) {
                cout << 4+i << " " << n-i << " ";
            }
            cout << "\n" << n/2+1 << "\n1 2 ";
            for (int i=0; i<(n-3)/4; ++i) {
                cout << (n+4)/2-i << " " << (n+4)/2+1+i << " ";
            }
        }
    }
    else cout << "NO";
}

