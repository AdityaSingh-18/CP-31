// Problem Link https://codeforces.com/contest/1178/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int wow = 0, countW = 0, ans = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == 'o'){
            wow += countW;
        }
        else if(i > 0 && s[i - 1] == 'v'){
            countW++;
            ans += wow;
        }
    }
    cout << ans << "\n";
}

signed main(){
    solve();
}