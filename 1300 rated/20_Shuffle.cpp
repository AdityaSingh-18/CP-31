// Problem Link https://codeforces.com/problemset/problem/1366/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x, m;
    cin >> n >> x >> m;
    int i = x, j = x;
    while(m--){
        int l, r;
        cin >> l >> r;
        if(i <= r && j >= l){
            i = min(i, l);
            j = max(j, r);
        }
    }
    cout << j - i + 1 << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}