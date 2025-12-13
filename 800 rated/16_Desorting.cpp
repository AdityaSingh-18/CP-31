// Problem Link https://codeforces.com/problemset/problem/1853/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    int minDif = a[1] - a[0];
    for (int i = 2; i < n; i++){
        minDif = min(minDif, a[i] - a[i - 1]);
    }
    cout << (minDif < 0 ? 0 : minDif/2 + 1) << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}

/*

We have to find the minimum difference between two elements and if the difference is negative
then the array is already desorted and we need 0 operations and if its positive then its
difference/2 to make both elements equal and 1 extra to desort it.
Time Complexity: O(n)
Space Complexity: O(1)

*/