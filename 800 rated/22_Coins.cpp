// Problem Link https://codeforces.com/problemset/problem/1814/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;
    cout << (n % 2 && !(k % 2) ? "NO\n" : "YES\n");
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We can make any number n when k is odd.But if k is even we cannot make any odd number since 
2x + even*y is always even.So when check those specific conditions and print the result.
Time Complexity: O(1)
Space Complexity: O(1)

*/