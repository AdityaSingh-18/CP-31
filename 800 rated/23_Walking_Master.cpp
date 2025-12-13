// Problem Link https://codeforces.com/problemset/problem/1806/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (d >= b ? (a + d - b >= c ? 2 * (d - b) + a - c : -1) : -1) << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We can only move upwards so first we check that d is greater than b or not.Then we calculate
that if we reach point d by moving diagonally will we react at point greater than or equal to c
because we can only move diagonally top right which will change b as well or left.
Then finally we calculate the numbers of moves needed and print the result accordingly.
Time Complexity: O(1)
Space Complexity: O(1)

*/