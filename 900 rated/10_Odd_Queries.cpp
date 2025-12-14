// Problem Link https://codeforces.com/problemset/problem/1807/D

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<ll> sum(n + 1);
    ll x;
    sum[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> x;
        sum[i] = x + sum[i - 1];
    }
    int l, r;
    ll k;
    for (int i = 1; i <= q; i++){
        cin >> l >> r >> k;
        if ((sum[n] - (sum[r] - sum[l - 1]) + (r - l + 1) * k) % 2)     cout << "YES\n";
        else     cout << "NO\n";
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We first precompute the sum of array at each position and store them in vector sum.
We then calculate the sum of array between r and l by subtracting sum at r by l-1.
Then we can calculate the new sum:
New sum = Total sum - sum of subarray between r to l + replacement sum.
Time Complexity: O(n + q)
Space Complexity: O(n)

*/