// Problem Link https://codeforces.com/problemset/problem/1780/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> sum(n + 1);
    sum[0] = 0;
    ll x;
    for (int i = 0; i < n; i++){
        cin >> x;
        sum[i + 1] = x + sum[i];
    }
    ll maxGCD = 1;
    for (int i = 1; i < n; i++){
        maxGCD = max (maxGCD, gcd(sum[n] - sum[i], sum[i]));
    }
    cout << maxGCD << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

In this probelm we can see that it is never beneficial to divide the array into greater than
k = 2 segements.
So we precompute the sum of array and find the GCD of prefix and suffix values of different lengths.
And store the max GCD among all the GCD we get.
Time Complexity: O(n)
Space Complexity: O(n)

*/