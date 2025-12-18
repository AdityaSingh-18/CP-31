// Problem Link https://codeforces.com/problemset/problem/1708/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll l, r;
    cin >> n >> l >> r;
    vector<ll> a(n + 1);
    int flag = 1;
    for (int i = 1; i <= n; i++){
        a[i] = ((l - 1) / i + 1) * i;
        if(a[i] > r){
            flag = 0;
        }
    }
    if(flag){
        cout << "YES\n";
        for (int i = 1; i <= n; i++){
            cout << a[i] << " \n"[i == n];
        }
    }
    else    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

gcd(i,ai)≤i. Because all gcd(i,ai) are different, then gcd(i,ai)=i, which means ai is the 
multiple of i. To check if there is such ai, just check if ai = ((l − 1 / i) + 1) * i (the minimum 
multiple of i that is strictly bigger than l−1) is less than r. 
Time Complexity: O(n)
Space Complexity: O(n)

*/