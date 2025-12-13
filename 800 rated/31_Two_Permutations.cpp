// Problem Link https://codeforces.com/problemset/problem/1761/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    if (n == a && a == b){
        cout << "Yes\n";
        return;
    }
    if (a + b + 2 <= n)   cout << "Yes\n";
    else    cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}

/*

We can always make a pair if n >= a + b + 2. Otherwise, the two permutations must be equal so we check if 
a = b = n or not.
Time Complexity: O(1)
Space Complexity: O(1)
*/