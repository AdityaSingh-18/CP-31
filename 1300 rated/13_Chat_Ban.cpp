// Problem Link https://codeforces.com/problemset/problem/1612/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int k, x;
    cin >> k >> x;
    if((k * k) <= x){
        cout << 2 * k - 1 << "\n";
        return;
    }
    int sum = (k * (k + 1)) / 2;
    if(x == sum)    cout << k << "\n";
    else if(x < sum){
        int l = 1, r = k;
        while(l < r){
            int mid = (l + r) / 2;
            if(((mid * (mid + 1)) / 2) < x){
                l = mid + 1;
            }
            else   r = mid;
        }
        cout << l << "\n";
    }
    else{
        int l = 1, r = k - 1;
        while(l < r){
            int mid = (l + r) / 2;
            if((mid * k - (mid * (mid + 1)) / 2) < (x - sum)){
                l = mid + 1;
            }
            else   r = mid;
        }
        cout << k + l << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}