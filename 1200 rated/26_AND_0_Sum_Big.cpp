// Problem Link https://codeforces.com/problemset/problem/1514/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll ans = 1;
    for (int i = 0; i < k; i++){
        ans = (ans * n) % MOD;
    }
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

Lets say every bit of the elements of the array is 1 then its AND will not be 0. So we need one
of the element where the bits are 0 to make the AND of array equal 0. We should not it for more
than one element as it will decrease the sum of array unnecessarily. So there are k bits at max 
and n numbers in the array so answer is n^k. So we do n^k % MOD.
Time Complexity: O(n)
Space Complexity: O(n)

*/