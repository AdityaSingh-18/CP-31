// Problem Link https://codeforces.com/problemset/problem/1537/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, i, j;
    cin >> n >> m >> i >> j;
    cout << "1 1 " << n << " " << m << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
}


/*

The trick here is that Riley can move only straight so if Anton throws the yoyo at two
opposite corners Riley have to move to all four corners to collect all yoyos and comeback
to its initial position.So we can simply choose any two corners.
Time Complexity: O(1)
Space Complexity: O(1) 

*/