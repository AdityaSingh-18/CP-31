// Problem Link https://codeforces.com/problemset/problem/1931/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    map<pair<int, int>, int> mp;
    int ans = 0; 
    for (int i = 0; i < n; i++){
        int mod1 = a[i] % x;
        int mod2 = a[i] % y;
        ans += mp[{(x - mod1) % x, mod2}];
        mp[{mod1, mod2}]++;
    }
    cout << ans << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

Since (ai + aj) mod x = 0, it implies that ai mod x + aj mod x is either x or 0. 
Therefore, for some j, this holds true if ai mod x = (x − aj mod x) mod x.
Since (ai − aj) mod y = 0, it implies that ai mod y = aj mod y.
Thus, for some fixed aj, all ai will fit the following criteria:
i < j;
ai mod x = (x − aj mod x) mod x;
ai mod y = aj mod y.
So we interate through the array and calculating the number of pairs satisfying these conditions.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/