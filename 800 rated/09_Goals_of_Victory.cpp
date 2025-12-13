// Problem Link https://codeforces.com/problemset/problem/1877/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x, sum = 0;
    for (int i = 1; i < n; i++){
        cin >> x;
        sum += x;
    }
    cout << sum * -1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

The sum of efficiency of all teams should be 0.So we calculate the sum of efficiency of n-1 teams and 
multiply it by -1 to make the sum 0.
Time Complexity: O(n)
Space Complexity: O(1)

*/