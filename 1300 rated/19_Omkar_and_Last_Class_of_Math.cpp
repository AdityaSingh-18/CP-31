// Problem Link https://codeforces.com/problemset/problem/1372/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int flag = 1;
    for (int i = 2; i <= 1e6; i++){
        if(n % i == 0){
            cout << n / i << " " << n - (n / i) << "\n";
            flag = 0;
            break;
        }
    }
    if(flag)    cout << 1 << " " << n - 1 << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}