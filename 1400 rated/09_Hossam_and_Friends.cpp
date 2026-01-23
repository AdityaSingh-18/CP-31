// Problem Link https://codeforces.com/problemset/problem/1771/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        if (x > y)      swap(x, y);
        a[y] = max(a[y], x);
    }
    vector<int> b(n + 1);
    b[1] = 1;
    int ans = 1;
    for (int i = 2; i <= n; i++) {
        b[i] = max(b[i - 1], a[i] + 1);
        ans += i - b[i] + 1;
    }
    cout << ans << '\n';
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}