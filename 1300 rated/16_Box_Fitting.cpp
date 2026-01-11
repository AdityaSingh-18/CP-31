// Problem Link https://codeforces.com/problemset/problem/1498/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, w, x;
    cin >> n >> w;
    multiset<int> a;
    for (int i = 0; i < n; i++){
        cin >> x;
        a.insert(x);
    }
    int widthNeed = w, count = 1;
    while(!a.empty()){
        if(widthNeed == 0){
            widthNeed = w;
            count++;
        }
        auto has = a.upper_bound(widthNeed);
        if(has != a.begin()){
            has--;
            widthNeed -= (*has);
            a.erase(has);
        }
        else{
            widthNeed = w;
            count++;
        }
    }
    cout << count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}