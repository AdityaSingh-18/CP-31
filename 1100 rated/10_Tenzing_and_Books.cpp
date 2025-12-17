// Problem Link https://codeforces.com/problemset/problem/1842/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    ll s = 0;
    for (int i = 0; i < 3; i++){
        for (auto &j : a)    cin >> j;
        for (auto &j : a){
            if((x | j) != x)   break;
            s |= j;
        }
    }
    if(s == x)     cout << "Yes\n";
    else    cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

In bitwise OR operation, if a bit of x changes to 1, then it will never become 0.
So if the bitwise OR of a book with knowledge x is not equal to x then the book is not valid.
We called a number y valid if x|y=x. For each sequence, we can find a longest prefix of it such that all 
numbers in this prefix are valid. Find the bitwise OR of the three prefix and check whether it equals to x.
Time Complexity: O(n) 
Space Complexity: O(n)

*/