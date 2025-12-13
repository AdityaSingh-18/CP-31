// Problem Link https://codeforces.com/problemset/problem/1829/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x, maxCount = 0, count = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == 0)   count++;
        else   count = 0;
        maxCount = max(maxCount, count);
    }
    cout << maxCount << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

Just simply counted the max consecutive 0's in the array.
Time Complexity: O(n)
Space Complexity: O(1)

*/