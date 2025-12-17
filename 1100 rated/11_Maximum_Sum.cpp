// Problem Link https://codeforces.com/problemset/problem/1832/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<ll> a(n), sum(n + 1);
    for (auto &i : a)    cin >> i;
    sort(a.begin(), a.end());
    sum[0] = 0;
    for (int i = 0; i < n; i++){
        sum[i + 1] = a[i] + sum[i];
    }
    ll maxSum = 0;
    for (int i = 0; i <= k; i++){
        maxSum = max (maxSum, sum[n - (k - i)] - sum[i * 2]);
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

We first sort the array and precompute the sum of elements for each index.
The we check for all combinations of operations we can apply on the array and store the maximum sum 
we can get after k operations.
We apply different combinations in this way:if we remove 2m minimum elements then we have to remove 
only (k - m) maximum elements from the array.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/