// Problem Link https://codeforces.com/problemset/problem/1766/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int digitCount = log (n)/log (10);
    cout << 9 * digitCount + (int)(n/pow (10, digitCount)) << "\n";  
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}

/*

Extremely round numbers are of form d * 10^k (d ∈ [1..9]).
So we calculate the number of extremely round numbers for n using formula:
count = 9 * (digits - 1) + first_digit.
Time Complexity: O(1)
Space Complexity: O(1) 

*/