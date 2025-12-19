// Problem Link https://codeforces.com/problemset/problem/1692/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, s;
    cin >> n >> s;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
        if(i)   b[i] += b[i - 1];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++){
        int l = i, r = n - 1, pos = -1;
        while (l <= r){
            int mid = (l + r) / 2;
            if((b[mid] - (i ? b[i - 1] : 0)) <= s){
                pos = mid;
                l = mid + 1;
            }
            else    r = mid - 1;
        }
        if(pos == -1 || ((b[pos] - (i ? b[i - 1] : 0)) != s))   continue;
        ans = min (ans, n - (pos - i + 1));
    }
    cout << (ans == INT_MAX ? -1 : ans) << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first precompute the predix sum of the array. Then we iterate through the array and
use binary search to find the smallest r such the sum of a[l]....a[r] is equal to s.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/