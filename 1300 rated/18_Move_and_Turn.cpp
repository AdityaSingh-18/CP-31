// Problem Link https://codeforces.com/problemset/problem/1459/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    if(n % 2)   cout << 2 * (n / 2 + 1) * (n / 2 + 2) << "\n";
    else    cout << (n / 2 + 1) * (n / 2 + 1) << "\n";
}

signed main(){
    solve();
}