// Problem Link https://codeforces.com/problemset/problem/1669/H

#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(31);
    for (auto &i : a)   cin >> i;
    for (int i = 0; i < n; i++){
        for (int j = 30; j >= 0; j--){
            if(a[i] & (1 << j)){
                b[j]++;
            }
        }
    }
    int maxAND = 0;
    for (int i = 30; i >= 0; i--){
        if(k >= n - b[i]){
            k -= n - b[i];
            maxAND += (1 << i);
        }
    }
    cout << maxAND << "\n";
}
 
signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

The most optimal operation for k is to set the highest bits to 1 first.
We calculate the bits count at each bit position for each element.
The we keep adding the number of 1 needed to the highest bit possible greedily.
Time Complexity: O(n * 30)
Space Complexity: O(n) 

*/