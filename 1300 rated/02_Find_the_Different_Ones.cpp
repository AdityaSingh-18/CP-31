// Problem Link https://codeforces.com/contest/1927/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    for (int i = 0; i < n - 1; ){
        int j = i + 1, k = -1;
        while(j < n && a[i] == a[j]){
            j++;
        }
        if(j < n)   k = j + 1;
        while(i < j){
            a[i] = k;
            i++;
        }
    }
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        if(a[l - 1] == -1 || a[l - 1] > r){
            cout << "-1 -1\n";
        }
        else    cout << l << " " << a[l - 1] << "\n";
    }
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We need to print the index of two unique values in the range if they exist. So we can find the index
of next unique value for a particular element and store it in that index. And if no unique value exist
then we store -1 at that index.
Now for each query l and r we will check whether the value at a[l] is equal to -1 or not as well as
whether it is greater than r or not and print the index accordingly.
Time Complexity: O(n)
Space Complexity: O(n)

*/