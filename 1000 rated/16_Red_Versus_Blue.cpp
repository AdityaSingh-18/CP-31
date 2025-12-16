// Problem Link https://codeforces.com/problemset/problem/1659/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, r, b;
    cin >> n >> r >> b;
    for (int i = b; i > 0; i--){
        int x = (r + 1)/ (b + 1);
        while(x--){
            cout << 'R';
            r--;
        }
        cout << 'B';
        b--;
    }
    while(r--){
        cout << 'R';
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We calculate the r and k ratio for the string at each iteration and print the strings accordingly until
we b becomes 0.Then we print the remaining r.
Time Complexity: O(r + b)
Space Complexity: O(1)

*/