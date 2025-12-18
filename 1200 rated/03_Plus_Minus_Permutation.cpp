// Problem Link https://codeforces.com/problemset/problem/1872/D

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll x, ll y){                 // Euclidean algorithm
    while(y){
        x %= y;
        x += y;
        y = x - y;
        x -= y;
    }
    return x;
}

ll sumOfN(ll n){
    return n * (n + 1) / 2;
}

void solve(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll commonFactors = n / ((x / gcd(x, y)) * y);
    ll totalXIndex = (n / x) - commonFactors;
    ll totalYIndex = (n / y) - commonFactors;
    ll maxSum = sumOfN(n) - sumOfN(n - totalXIndex) - sumOfN(totalYIndex);
    cout << maxSum << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

To get the maxSum we have to put all the max elements in the permutation at the multiple
of x and all minimum elements at the multiple of y. If there are common factors between x and y
in the permutation indices then their sum will be nullified so we dont need to consider those
indices. 
So we find the number of common factors and minus it from the number of x multiple indices 
and y multiple indices and find the sum of n natural numbers - sum of (n - x) natural numbers
to get the sum of highest (n - x) numbers and minus y indices natural numbers.
Time Complexity: O(log(min(x, y)))
Space Complexity: O(1)

*/