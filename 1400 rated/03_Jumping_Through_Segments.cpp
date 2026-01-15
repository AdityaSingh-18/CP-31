// Problem Link https://codeforces.com/problemset/problem/1907/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isReachable(vector<pair<int, int>> a, int n, int k){
    int currMin = 0;
    int currMax = 0;
    for (int i = 0; i < n; i++){
        currMin -= k;
        currMax += k;
        int reachMin = max(currMin, a[i].first); 
        int reachMax = min(currMax, a[i].second);
        if(reachMin > reachMax)     return false;
        currMin = reachMin; 
        currMax = reachMax; 
    }
    return true;
}

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    int l = 0, r = 1e9;
    while(l < r){
        int mid = (l + r) / 2;
        if(isReachable(a, n, mid))    r = mid;
        else    l = mid + 1;
    }
    cout << l << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}