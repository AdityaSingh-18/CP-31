// Problem Link https://codeforces.com/problemset/problem/1119/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    for(int i = 0; i < n; i++){
        sort(a.begin(), a.begin() + i + 1, greater<int>()); 
        int j = 0, sum = 0;
        while(j <= i){
            sum += a[j];
            j += 2;
        }
        if(sum > h){
            cout << i << "\n";
            return;
        }
    }
    cout << n << "\n";
}

signed main(){
    solve();
}