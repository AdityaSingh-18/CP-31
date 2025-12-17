// Problem Link https://codeforces.com/problemset/problem/1899/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x;
    cin >> n ;
    vector<ll> sum(n + 1);
    sum[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> x;
        sum[i] = x + sum[i - 1];
    }
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++){
        if(n % i == 0){
            divisors.push_back(i);
            if (i != n / i && n / i != n)     divisors.push_back(n / i);
        }
    }
    ll maxDiff = 0;
    for(int i : divisors){
        ll maxSum = 0, minSum = 1e17;
        for(int j = i; j <= n; j += i){
            maxSum = max (maxSum, (sum[j] - sum[j - i]));
            minSum = min (minSum, (sum[j] - sum[j - i]));
        }
        maxDiff = max (maxDiff, maxSum - minSum);
    }
    cout << maxDiff << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first precompute the sum of elements at each index and then all the divisors of n except n itself
and store it in divisors vector because if i is divisible by n completely then we can load all trucks 
with exactly i boxes so we calculate the max and min sum of i boxes and store the max difference.
Then we calculate the maxDiff for each divisor value and print the maxDiff atlast.
Time Complexity: O(n log n)(log n for divisor and n for iterating the weight)
Space Complexity: O(n) 

*/