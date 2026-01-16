// Problem Link https://codeforces.com/problemset/problem/1904/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)    cin >> i;
    if(k >= 3){
        cout << "0\n";
        return;
    }
    sort(a.begin(), a.end());
    int minElement = a[0];
    for (int i = 0; i < n - 1; i++){
        minElement = min(minElement, a[i + 1] - a[i]);
    }
    if(k == 1){
        cout << minElement << "\n";
        return;
    }
    for (int i = 0; i < n; i++){ 
        for (int j = 0; j < i; j++) {
            int diff = a[i] - a[j];
            int idx = lower_bound(a.begin(), a.end(), diff) - a.begin();
            if (idx < n)      minElement = min(minElement, a[idx] - diff);
            if (idx > 0)      minElement = min(minElement, diff - a[idx - 1]);
        }
    }
    cout << minElement << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}