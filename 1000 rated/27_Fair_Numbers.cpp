// Problem Link https://codeforces.com/problemset/problem/1411/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    for( ; ; ){
        ll x = n;
        int isFair = 1;
        while (x){
            ll d = x % 10;
            if (d && n % d != 0){
                isFair = 0;
                n++;
                break;
            }
            x /= 10;
        }
        if (isFair){
            cout << n << "\n";
            return;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We use brute force to find the number starting from n whose each digit divides the number
completely. We keep incrementing the value of n until we dont get that number.
Time Complexity: O(k * log n) (k is the number of increment and log n for getting digits of number)
Space Complexity: O(1)

*/