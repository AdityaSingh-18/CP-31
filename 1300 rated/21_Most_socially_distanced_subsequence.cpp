// Problem Link https://codeforces.com/problemset/problem/1364/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b;
    for (auto &i : a)   cin >> i;
    int count = 0;
    b.push_back(a[0]);
    for (int i = 0; i < n - 1; ){
        int j = i;
        while(j < n - 1 && a[j] < a[j + 1]){
            j++;
        }
        if(j > i)    b.push_back(a[min(j, n - 1)]);
        i = j;
        while(j < n - 1 && a[j] > a[j + 1]){
            j++;
        }
        if(j > i)    b.push_back(a[min(j, n - 1)]);
        i = j;
    }
    cout << b.size() << "\n";
    for (auto &i : b)    cout << i << " ";
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}