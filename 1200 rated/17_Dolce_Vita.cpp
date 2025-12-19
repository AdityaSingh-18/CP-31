// Problem Link https://codeforces.com/problemset/problem/1671/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> pref(n);
    for(int i = 0; i < n; i++){
        if(i)   pref[i] = pref[i - 1] + a[i];
        else    pref[i] = a[i];
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(pref[i] > x)     break;
        ll days = (x - pref[i]) / (i + 1);
        ans += days + 1;
    }
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first sort the cost in each shop and then calculate the prefix sum.
Then we iterate through the prefix sum and find the number of days we can buy the ith 
cheapest packs until it rises above the budget. We divide with i + 1 because the price rises
by 1 each day. Also we add days + 1 to the sum to consider day 0 when there is no price increase.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/