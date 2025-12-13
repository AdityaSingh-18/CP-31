// Problem Link https://codeforces.com/problemset/problem/1789/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)   cin >> i;
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if(__gcd(a[i], a[j]) <= 2){
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

A array can have all the prefixes good only when there exist a pair whose gcd is less than or equal to 2.
So we find the gcd of all the pairs in array until we get a pair with fcd less than or equal to 2 and print
the result accordingly.
Time Complexity: O(n^2logA)
Space Complexity: O(n)

*/