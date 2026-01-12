// Problem Link https://codeforces.com/problemset/problem/808/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k, x;
    cin >> n >> k;
    double sum = 0;
    for (int i = 1; i <= n; i++){
        cin >> x;
        sum += (x * min({i, n - i + 1, n - k + 1, k}));
    }
    cout << fixed << setprecision(10) << sum / (n - k + 1) << "\n";
}

signed main(){
    solve();
}