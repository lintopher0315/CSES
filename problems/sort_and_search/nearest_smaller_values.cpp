#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<pair<int, int>> s;
    for (int i=0; i<n; ++i) {
        int a;
        cin >> a;
        while (!s.empty() && a<=s.top().first) {
            s.pop();
        }
        if (s.empty()) {
            s.push({a, i+1});
            cout << "0 ";
        }
        else {
            cout << s.top().second << " ";
            s.push({a, i+1});
        }
    }
}

