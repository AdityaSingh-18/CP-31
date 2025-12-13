// Problem Link https://codeforces.com/problemset/problem/1845/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a;
    while (n && k){
        if (k <= n && k != x){
            if (x == 1 && (n - k) == 1)    k--;
            else{
                n -= k;
                a.push_back(k);
            }
        }
        else    k--;
    }
    int m = a.size();
    if (n > 0)     cout << "NO\n";
    else{
        cout << "YES\n" << m << "\n";
        for (int i = 0; i < m; i++){
            cout << a[i] << " \n"[i == m - 1];
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We have to make sum equal to x without using x so we need to avoid using x by checking k equal to x or not.
If the value of n becomes 0 after while loop then we have got a combination to make sum otherwise no.
There is one special case when x is 1 then we should avoid a value which make n equal 1 because there 
will be no number left to make sum equal n.While it maybe possible to make it with using a smaller number
than current k.
Time Complexity: O(n)
Space Complexity: O(n)

*/