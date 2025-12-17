// Problem Link https://codeforces.com/problemset/problem/1826/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n; 
    vector<ll> a(n);
    for (auto &i : a)   cin >> i;
    ll x = 0;
    for (int i = 0; i < n / 2; i++){
        x = gcd(x, abs(a[i] - a[n - i - 1]));
    }
    cout << x << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

To make a the array palindrome it must satisfy the condition a[i] = a[n - i] for all values of i.
In this problem a[i] = ai % x so ai % x should be equal to a(n - i) % x. It basically means ai - a(n - i) 
should be divisible by x.
For that we find the GCD of a[i] - a[n - i - 1] for all the values of i.
Time Complexity:  O(n + log(10^9))(log(10^9) for GCD)
Space Complexity: O(n)

*/