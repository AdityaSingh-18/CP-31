// Problem Link https://codeforces.com/problemset/problem/1285/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int sum = 0;
    vector<int> a(n);
    for (auto &i : a){
        cin >> i;
        sum += i; 
    }
    int maxSub = a[0], curr = a[0];
    for (int i = 1; i < (n - 1); i++){
        curr = max(a[i], curr + a[i]);
        maxSub = max(maxSub, curr);
    }
    curr = a[1];
    maxSub = max(maxSub, curr);
    for (int i = 2; i < n; i++){
        curr = max(a[i], curr + a[i]);
        maxSub = max(maxSub, curr);
    }
    if(sum <= maxSub)    cout << "NO\n";
    else    cout << "YES\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}