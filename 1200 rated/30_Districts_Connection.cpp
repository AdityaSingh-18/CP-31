// Problem Link https://codeforces.com/problemset/problem/1433/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    bool flag = false;
    int x = -1;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(i && a[0] != a[i] && !flag){
            x = i + 1;
            flag = true;
        }
    }
    if(!flag){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int i = 1; i < n; i++){
        if(a[0] != a[i])    cout << 1 << " " << i + 1 << "\n";
        else    cout << x << " " << i + 1 << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We can't connect districts with same gang. So we need atleast two different gangs otherwise answer
is NO. If there are two or more gangs then we can connect all the districts with different gang than 
the 1st district gang and 2nd district with dfferent gang to the districts with same gang as in 1st
district.
Time Complexity: O(n)
Space Complexity: O(n)

*/