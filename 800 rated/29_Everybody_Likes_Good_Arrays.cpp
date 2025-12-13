// Problem Link https://codeforces.com/problemset/problem/1777/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, prev;
    cin >> n >> prev;
    int x, count = 0;
    for (int i = 1; i < n; i++){
        cin >> x;
        if(x % 2 == prev % 2)   count++;
        else   prev = x;
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

If there are n consecutive elements with same parity then we need n-1 operations to make the 
parity of adjacent elements different.So we just count the number of times when the adjacent 
elements have same parity.
Time Complexity: O(n)
Space Complexity: O(1)

*/