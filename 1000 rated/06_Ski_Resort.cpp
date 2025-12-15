// Problem Link https://codeforces.com/problemset/problem/1840/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k, q;
    cin >> n >> k >> q;
    ll x, sum = 0, count = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x <= q)    count++;
        if (x > q || i == n - 1){
            if (count >= k){
                ll n = count - k + 1;
                sum += n * (n + 1) / 2;
            }
            count = 0;
        }
    }
    cout << sum << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We iterate through the array and find the count of days which have temperature not more than q and 
are atleast k consecutive days.Then we calculate the number of combination in which he can go skiing.
Time Complexity: O(n)
Space Complexity: O(1)

*/