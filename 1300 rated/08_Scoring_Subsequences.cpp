// Problem Link https://codeforces.com/problemset/problem/1794/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    for (int i = 0; i < n; i++){
        int l = 1, r = i + 1;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[i - mid + 1] >= mid)    l = mid + 1;
            else    r = mid - 1;
        }
        cout << r << " \n"[i == n - 1];
    }   
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

For a non-decreasing sequence, the optimal subsequence is always a suffix.
The cost is the length of longest suffix where the transformed values are ≥ 1, 
We use binary search to calculate the longest suffix for each index.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/