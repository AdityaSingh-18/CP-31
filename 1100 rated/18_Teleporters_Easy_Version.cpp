// Problem Link https://codeforces.com/problemset/problem/1791/G1

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k, x;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 1; i <= n ; i++){
        cin >> x;
        a[i - 1] = x + i; 
    }
    sort(a.begin(), a.end());
    ll sum = a[0], i = 0;
    while(i < n && sum <= k){
        i++;
        sum += a[i];
    }
    cout << i << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We take the input and add the cost of moving to that teleporter at the time of storing
teleporter values.
Then we sort the array and find the maximum number of teleporters wecan go without exceeding
the cost over k.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/