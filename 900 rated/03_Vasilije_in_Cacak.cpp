// Problem Link https://codeforces.com/problemset/problem/1878/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;
    ll minSum = k * (k + 1)/2;
    ll maxSum = n * k - (k * (k - 1)/2);
    if(x >= minSum && x <= maxSum)     cout << "YES\n";
    else     cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We calculate the minimum and maximum sum possible using k distinct numbers between 1 to n.
For minimum sum we simply calculate sum of first k numbers.For maximum sum we calculate
the sum of largest k distinct numbers from 1 to n.By calculating the total sum and subtracting
the sum of first n-k numbers we get the sum of largest k distinct numbers upto n.
Time Complexity: O(1)
Space Complexity: O(1)

*/