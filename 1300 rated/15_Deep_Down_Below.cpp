// Problem Link https://codeforces.com/problemset/problem/1561/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n;
    vector<vector<int>> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> m;
        sum += m;
        a[i].resize(m);
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            a[i][j]++;       
        }
    }
    vector<pair<int, int>> b;
    for (int i = 0; i < n; i++){
        int maxArmor = 0, k = 0;
        for (int j = 0; j < a[i].size(); j++){
            if((maxArmor - k) < (a[i][j] - j)){
                maxArmor = a[i][j];
                k = j;
            }
        }
        b.push_back({maxArmor - k, (int)a[i].size()});
    }
    sort(b.rbegin(), b.rend());
    int maxNeed = 0, rem = 0;
    for (int i = 0; i < n; i++){
        rem += b[i].second;
        maxNeed = max(maxNeed, b[i].first - (sum - rem));
    }
    cout << maxNeed << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}