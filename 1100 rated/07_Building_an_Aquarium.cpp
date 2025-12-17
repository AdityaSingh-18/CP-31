// Problem Link https://codeforces.com/problemset/problem/1873/E

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto &i : a)    cin >> i;
    ll high = 2e10, low = 0;
    while (low < high){
        ll mid = low + (high - low + 1) / 2;
        ll sum = 0;
        int j = 0;
        while(j < n){
            sum += max (0LL, mid - a[j]);
            j++;
        }
        if(sum <= x)    low = mid;
        else    high = mid - 1;
    }
    cout << low << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We use binary search to find the maximum height of the tank to have x amount of water.
We take high and low and calculate mid acoording to the values and keep updating the 
high and low values to get the solution.
Time Complexity: O(n log A)(where A is maximum possible upper bound value i.e 2e10 in this)
Space Complexity: O(n)

*/