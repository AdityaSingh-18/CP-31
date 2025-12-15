// Problem Link https://codeforces.com/problemset/problem/1471/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, x;
    cin >> n >> x;
    ll a, sum = 0, sumMin = 0, sumMax = 0;
    for (int i = 0; i < n; i++){
        cin >> a;
        sum += a;
        sumMax += (a + x - 1) / x;
    }
    sumMin = (sum + x - 1) / x; 
    cout << sumMin << " " << sumMax << "\n"; 
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
}


/*

If the number is not completly divisible by x then the sum of resulting values increases because we have
to round up to the nearest integer.
So we calculate the min and max sum by performing operation on the sum of array and on individual elements
respectively.
Time Complexity: O(n)
Space Complexity: O(1)

*/