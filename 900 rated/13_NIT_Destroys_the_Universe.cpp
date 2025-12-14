// Problem Link https://codeforces.com/problemset/problem/1696/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x, count = 0, prev = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x != 0 && prev == 0)    count++;
        prev = x;
    }
    cout << min (count, 2) << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We have to find the number of subarray in the array without zero.Thats the minimum number
of operations needed to make all the array 0.
Time Complexity: O(n)
Space Complexity: O(1)

*/