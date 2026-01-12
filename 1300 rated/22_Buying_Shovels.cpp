// Problem Link https://codeforces.com/problemset/problem/1360/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    if(n <= k) {
        cout << 1 << "\n";
        return;
    }
    int ans = n;
    for (int i = 1; i * i <= n; i++){
        if(n % i == 0){
            if(i <= k)    ans = min (ans, n / i);
            if((n / i) <= k)     ans = min (ans, i);
        }
    }
    cout << ans << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}