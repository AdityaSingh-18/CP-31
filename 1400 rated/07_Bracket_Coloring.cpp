// Problem Link https://codeforces.com/problemset/problem/1837/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0, color = 1, pos = 0, need = 1;
    if (s[0] == '(')    pos = 1;    
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        if(s[i] == '('){
            if(count == 0){
                if(pos == 1)    color = 1;
                else    color = 2;
            }
            count++;
        }
        if(s[i] == ')'){
            if(count == 0){
                if(pos == 0)    color = 1;
                else    color = 2;    
            }
            count--;
        }
        if(color == 2)    need = 2;
        a[i] = color;
    }
    if(count != 0)      cout << -1 << "\n";
    else{
        cout << need << "\n";
        for (int i = 0; i < n; i++){
            cout << a[i] << " \n"[i == n - 1];
        }
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}