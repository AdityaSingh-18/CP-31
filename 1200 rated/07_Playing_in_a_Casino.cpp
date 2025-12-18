// Problem Link https://codeforces.com/problemset/problem/1808/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll> (m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    ll totalSum = 0;
    for (int i = 0; i < m; i++){
        vector<ll> b(n);
        for (int j = 0; j < n; j++){
            b[j] = a[j][i];
        }
        sort(b.begin(), b.end());
        ll preSum = 0;
        for (int j = 0; j < n; j++){
            totalSum += b[j] * j - preSum;
            preSum += b[j];
        }
    }
    cout << totalSum << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We store the card description of all the players and then calculate the winning sum of each
column individually to get the finalSum. So we first store the card number of each column
and then sort it and then use the formula on the sorted vector ai * i - prefix sum.
Time Complexity: O(m * n log n)
Space Complexity: O(n * m)  

*/