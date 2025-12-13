// Problem Link https://codeforces.com/problemset/problem/1831/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        cout << n + 1 - x << " \n"[i == n - 1];
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

We can make the all array elements sum of two arrays equal to n + 1 using formula n + 1 - x.
Time Complexity: O(n)
Space Complexity: O(1)

*/