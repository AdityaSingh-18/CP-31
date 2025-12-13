// Problem Link https://codeforces.com/problemset/problem/1857/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x, oddCount = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if(x % 2)    oddCount++;
    }
    if (oddCount % 2)   cout << "NO\n";
    else   cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We can make the sum of same parity for any number of even numbers.But for odd numbers the parity
of sum will only be same when the array have even count of odd numbers.So we check for that and print
result accordingly.
Time Complexity: O(1)
Space Complexity: O(1)

*/