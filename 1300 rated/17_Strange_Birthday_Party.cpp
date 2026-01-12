// Problem Link https://codeforces.com/contest/1470/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)    cin >> i;
    for (auto &i : b)   cin >> i;
    sort(a.rbegin(), a.rend());
    int ans = 0, j = 0;
    for (int i = 0; i < n; i++){
        if(j < m && b[j] <= b[a[i] - 1]){
            ans += b[j];
            j++;
        }
        else    ans += b[a[i] - 1];
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