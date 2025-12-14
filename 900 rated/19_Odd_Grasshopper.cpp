// Problem Link https://codeforces.com/problemset/problem/1607/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x, n;
    cin >> x >> n;
    if (x % 2 == 0){
        if (n % 4 == 0)     cout << x << "\n";
        if (n % 4 == 1)     cout << x - n << "\n";
        if (n % 4 == 2)     cout << x + 1 << "\n";
        if (n % 4 == 3)     cout << x + n + 1 << "\n";
    }
    else{
        if (n % 4 == 0)     cout << x << "\n";
        if (n % 4 == 1)     cout << x + n << "\n";
        if (n % 4 == 2)     cout << x - 1 << "\n";
        if (n % 4 == 3)     cout << x - n - 1 << "\n";
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

There is a pattern in this problem so we have to figure out that and print the result accordingly.
Time Complexity: O(1)
Space Complexity: O(1)

*/