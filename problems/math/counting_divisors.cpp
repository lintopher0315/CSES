#include <bits/stdc++.h>

using namespace std;

const int mn=1e6+1;
int arr[mn];

int main() {
    for (int i=1; i<=mn; ++i) {
        for (int j=i; j<=mn; j+=i) {
            ++arr[j];
        }
    }
    int n, a;
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> a;
        cout << arr[a] << "\n";
    }
}

