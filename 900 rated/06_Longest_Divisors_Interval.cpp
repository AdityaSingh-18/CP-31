// Problem Link https://codeforces.com/problemset/problem/1855/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    int longestDivisor = 1;
    for (int i = 1; i < min(n, 30LL) ; i++){
        int count = 1;
        while (1 < n && n % i == 0 && n % (i + 1) == 0){
            count++;
            i++;
        }
        longestDivisor = max(longestDivisor, count);
    }
    cout << longestDivisor << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We calculate the longest divisor in the range 1 to 30 at max only.
Time Complexity: O(1)
Space Complexity: O(1) 

*/