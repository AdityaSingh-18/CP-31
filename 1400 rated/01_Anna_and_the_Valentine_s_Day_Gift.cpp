// Problem Link https://codeforces.com/problemset/problem/1931/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for (auto &i : a)   cin >> i;
    int digits = 0;
    for (int i = 0; i < n; i++){
        int count = 0;
        while(a[i] > 0 && a[i] % 10 == 0){
            count++;
            a[i] /= 10;
        }
        while(a[i] > 0){
            digits++;
            a[i] /= 10;
        }
        b[i] = count;
    }
    sort(b.rbegin(), b.rend());
    int sum = 0;
    for (int i = 1; i < n; i += 2){
        sum += b[i];
    }

    if((digits + sum) > m)    cout << "Sasha\n";
    else     cout << "Anna\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}