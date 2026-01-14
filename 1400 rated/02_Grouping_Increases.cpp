// Problem Link https://codeforces.com/problemset/problem/1919/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)    cin >> i;
    int count = 0, x = 1e18, y = 1e18;
    for (int i = 0; i < n; i++){
        if(a[i] <= x)     x = a[i];
        else if (a[i] <= y)     y = a[i];
        else{
            x = a[i];
            count++;
        }
        if(x > y)   swap(x, y);
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