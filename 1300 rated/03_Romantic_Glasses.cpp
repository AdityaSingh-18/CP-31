// Problem Link https://codeforces.com/contest/1915/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(i % 2)   a[i] = -a[i];
    }
    set<int> b;
    b.insert(0);
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (b.count(sum)){
            cout << "YES\n";
            return;
        }
        b.insert(sum);
    }
    cout << "NO\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

As sum of odd should be equal to sum of even we can write it as sum of odd - sum of even = 0
So we change the element at even places to negative. 
Then we use a set to store all the sum produced by the elements and if any sum occurs twice that
means equal sum of subarrays are possible.
Time Complexity: O(n)
Space Complexity: O(n)

*/