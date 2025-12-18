// Problem Link https://codeforces.com/problemset/problem/1669/F

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll x;
    vector<ll> sum(n + 1, 0);
    for (int i = 1; i <= n; i++){
        cin >> x;
        sum[i] = x + sum[i - 1];
    }
    ll j = 1, maxSum = 0;
    for (int i = 1; i <= n - j;){
        if(sum[i] == (sum[n] - sum[n - j]))    maxSum = i + j; 
        if(sum[i] > (sum[n] - sum[n - j]))    j++;
        else    i++;
    }
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

We solve this using two pointers. We first precompute the sum of elements at each indices.
Then we use one pointer i initally at 1 and second pointer n - j where j is initially 1.
Then we compare the sum of elements at index i and n - j to n and if they are equal we
store the sum of i + j which is the number of candies they ate.
If the sum at index i is greater we increase j otherwise i to move the sum closer.
If the two pointers have crossed, then both Alice and Bob took the same candy, which is not possible. 
So we exit and output the current answer.
Time Complexity: O(n)
Space Complexity: O(n)

*/