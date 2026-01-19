// Problem Link https://codeforces.com/problemset/problem/1883/G1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    a[0] = 1;
    for (int i = 1; i < n; i++){
        cin >> a[i];
    }
    for (auto &i :  b)    cin >> i;
    sort (a.begin(), a.end());
    sort (b.begin(), b.end());
    int count = 0;
    for (int i = 0, j = 0; i < n && j < n; i++, j++){
        while(j < n && a[i] >= b[j]){
            j++;
            count++;
        }
    }
    cout << count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}