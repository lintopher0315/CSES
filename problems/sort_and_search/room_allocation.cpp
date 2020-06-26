#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    vector<int> ans(n);
    vector<tuple<int, int, int>> v;
    set<int> r;
    for (int i=0; i<n; ++i) {
        cin >> a >> b;
        v.emplace_back(a, 0, i);
        v.emplace_back(b, 1, i);
    }
    sort(v.begin(), v.end());
    int c=0, m=0;
    for (int i=0; i<n*2; ++i) {
        if (!get<1>(v[i])) {
            ++c;
            m=max(c, m);
            if (r.empty()) {
                ans[get<2>(v[i])]=c;
            }
            else {
                ans[get<2>(v[i])]=*r.begin();
                r.erase(r.begin());
            }
        }
        else {
            --c;
            r.insert(ans[get<2>(v[i])]);
        }
    }
    cout << m << "\n";
    for (int i=0; i<n; ++i) {
        cout << ans[i] << " ";
    }
}

