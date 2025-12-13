// Problem Link https://codeforces.com/problemset/problem/1866/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x, minStep = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> x;
        minStep = min(minStep, abs(x));
    }
    cout << minStep << "\n";
}

int main(){
    solve();
}


/*

We have to find the element closest to 0.The absolute value of that element is the minimum operation 
needed to make the product of array 0.
Time Complexity: O(n)
Space Complexity: O(1)

*/