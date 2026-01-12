// Problem Link https://codeforces.com/problemset/problem/1294/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++){
        if(n % i == 0){
            int m = n / i;
            for (int j = i + 1; j * j <= m; j++){
                if(m % j == 0){
                    int k = m / j;
                    if(i != j && j != k && i != k){
                        cout << "YES\n";
                        cout << i << " " << j << " " << k << "\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "NO\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}