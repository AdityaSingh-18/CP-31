// Problem Link https://codeforces.com/problemset/problem/1828/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x, k = 0;
    for(int i = 1; i <= n; i++){
        cin >> x;
        k = __gcd(k, abs(x - i));
    }
    cout << k << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

To find the value of k we find the GCD of the difference between element and i
which represent the actual position of that element in a sorted array.
Time Complexity: O(n)
Space Complexity: O(1)

*/