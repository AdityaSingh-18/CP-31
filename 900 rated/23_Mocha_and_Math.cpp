// Problem Link https://codeforces.com/problemset/problem/1559/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, firstValue, x;
    cin >> n >> firstValue;
    int minValue = firstValue;
    for (int i = 1; i < n; i++){
        cin >> x;
        minValue &= x;
    }
    cout << minValue << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
}


/*

We simply find the bitwise AND of the array thats the minimum value we can make of the 
maximum value in the array.
Time Complexity: O(n)
Space Complexity: O(1) 

*/