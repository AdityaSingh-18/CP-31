// Problem Link https://codeforces.com/problemset/problem/1858/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a > b || (a == b && c % 2)) ? "First" : "Second") << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

Anna moves first so needs to have one extra button to win.The extra button can be in the buttons cannot be 
pressed by anyone(if c is odd) or the buttons pressed by herself only(a).
So we simply check whether a is greater than b or if a=b and c is odd or not.
Time Complexity: O(1)
Space Complexity: O(1)

*/