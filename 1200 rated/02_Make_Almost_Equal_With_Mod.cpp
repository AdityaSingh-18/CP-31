// Problem Link https://codeforces.com/problemset/problem/1909/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll first, second;
    cin >> n >> first >> second;
    ll GCD = abs(first - second);
    ll x;
    for (int i = 1; i <= n - 2; i++){
        cin >> x;
        GCD = gcd(GCD, abs(x - second));
        second = x;
    }
    cout << GCD * 2 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We need to calculate the GCD of the difference between two elements in the array and multiply by 2.
Time Complexity: O(n log A)
Space Complexity: O(1)

*/