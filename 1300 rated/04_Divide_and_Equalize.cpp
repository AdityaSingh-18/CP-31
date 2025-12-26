// Problem Link https://codeforces.com/problemset/problem/1881/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++){
        cin >> x;
        for (int j = 2; j * j <= x; j++){
            while(x % j == 0){
                freq[j]++;
                x /= j;
            }
        }
        if(x > 1){
            freq[x]++;
        }
    }
    for (auto &[i, c] : freq){
        if((c % n) != 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

As we can make all the elements only when the prime divisors of all elements can be made equal.
So we store all the prime divisor of each elements and check if they are a multiple of n or not.
Time Complexity: O(n sqrt A)
Space Complexity: O(n log A)

*/