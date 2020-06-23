#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    map<char, int> m;
    for (char c : n) {
        ++m[c];
    }
    string ans;
    bool f=false;
    for (auto x : m) {
        if (x.second%2) {
            if (f) {
                cout << "NO SOLUTION";
                return 0;
            }
            else {
                if (ans=="") {
                    ans=string(x.second, x.first);
                }
                else {
                    ans.insert(ans.length()/2, string(x.second, x.first));
                }
            }
            f=true;
        }
        else {
            ans=ans+string(x.second/2, x.first);
            ans=string(x.second/2, x.first)+ans;
        }
    }
    cout << ans;
}

