// Problem Link https://codeforces.com/problemset/problem/1504/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    a.push_back('0');
    b.push_back('0');
    int count = 0;
    for (int i = 0; i < n; i++){
        count += (a[i] == '1') - (a[i] == '0');
        if((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && count != 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

/*
    
*/