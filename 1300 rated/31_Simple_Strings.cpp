// Problem Link https://codeforces.com/problemset/problem/665/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 1; i < n; i++){
        if(s[i - 1] == s[i]){
            if(s[i] == 'z')     s[i] = 'a';
            else    s[i] = s[i] + 1;
            if(i < n - 1 && s[i] == s[i + 1]){
                if(s[i] == 'z')     s[i] = 'a';
                else     s[i] = s[i] + 1;
            }
        }
    }
    cout << s << "\n";
}

signed main(){
    solve();
}