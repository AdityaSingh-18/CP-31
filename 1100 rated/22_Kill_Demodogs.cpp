// Problem Link https://codeforces.com/problemset/problem/1731/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll MOD = 1e9 + 7;

void solve(){
    ll n;
    cin >> n;
    cout << ((((n * (n + 1)) % MOD)*(4 * n - 1)) % MOD * 2022 / 6) % MOD << "\n";     
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

The sequence with the max sum for a grid n * n is 1*1 + 2*3 + 3*5+...+ n*(2*n - 1).
So the formula for calculating the sum of these sequence for a given number n is:
n * (n + 1) * (4 * n - 1) / 6.
So we apply this formula and apply mod because the value can be too large.
Time Complexity: O(1)
Space Complexity: O(1)  

*/