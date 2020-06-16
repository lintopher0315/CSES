#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n==2 || n==3) {
        cout << "NO SOLUTION";
        return 0;
    }
    int s=2;
    while (s<=n) {
        cout << s << " ";
        s+=2;
    }
    s=1;
    while (s<=n) {
        cout << s << " ";
        s+=2;
    }
}

