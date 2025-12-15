// Problem Link https://codeforces.com/problemset/problem/1715/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll minSum = k * b, maxSum = (k * b) + (k - 1) + (n - 1) * (k - 1);
    if (s < minSum || s > maxSum){
        cout << -1 << "\n";
    }
    else{
        ll beautyElement = min (s, k * b + k - 1);
        s -= beautyElement;
        cout << beautyElement << " \n"[n == 1];
        for (int i = 1; i < n; i++){
            ll sumElement = min (s , k - 1);
            cout << sumElement << " \n"[i == n - 1];
            s -= sumElement;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We first check if the value of s is between the upperbound and lowerbound or not.
The minimum sum needed to make beauty of array after dividing by k is k * b.
And the max sum of array should be less than (k * b) + (k - 1) + (n - 1) * (k - 1).
k - 1: bcz of round up
k * b + k - 1: for the beauty
n - 1: remaining places in the array
k - 1: to not affect the beauty of array
n - 1 * k - 1: to match the sum if remaining without affecting the beauty.
Then we print the array with max possible value for beauty and then rest to 
match the sum of array.
Time Complexity: O(n)
Space Complexity: O(1)

*/