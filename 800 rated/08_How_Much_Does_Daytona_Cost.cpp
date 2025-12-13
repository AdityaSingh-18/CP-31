// Problem Link https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int x, found = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == k)    found = 1;
    }
    if (found)    cout << "YES\n";
    else     cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

This is a quite simple problem.We just need to check if k exist in array or not and print the
result accordingly.The element can be made most common by making the subsegment of only that element.
Time Complexity: O(n)
Space Complexity: O(1)

*/