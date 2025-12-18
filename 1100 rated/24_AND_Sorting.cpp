// Problem Link https://codeforces.com/problemset/problem/1682/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n;
    int maxAnd = -1;
    for (int i = 0; i < n; i++){
        cin >> x;
        if(x != i){
            maxAnd &= x;
        }
    }
    cout << maxAnd << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We do the bitwise AND of all the elements which are not sorted in the array.
So initial we take maxAnd = -1 that means all 32 bits set to 1. Now if we do bitwise AND
of maxAnd with any number it will result into that number. The elements which are not equal
to its index are not sorted and we do bitwise AND on all those elements to get the result.
Time Complexity: O(n)
Space Complexity: O(1)

*/