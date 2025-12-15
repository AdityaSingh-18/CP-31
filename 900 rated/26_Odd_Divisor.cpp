// Problem Link https://codeforces.com/problemset/problem/1475/A

#include <bits/stdc++.h>
#include <cmath>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    double x = log2(n);
    if (floor(x) == x)    cout << "NO\n";
    else    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
}


/*

All the intgers values have a odd divisor except the power of 2.So we check if the integer is a power of
2 or not.
Time Complexity: O(1)
Space Complexity: O(1)

*/