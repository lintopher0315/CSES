#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    sort(n.begin(), n.end());
    vector<string> p;
    p.push_back(n);
    while (next_permutation(n.begin(), n.end())) p.push_back(n);
    cout << p.size() << "\n";
    for (string a : p) cout << a << "\n";
}

