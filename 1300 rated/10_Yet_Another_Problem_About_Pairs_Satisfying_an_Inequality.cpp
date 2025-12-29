// Problem Link https://codeforces.com/problemset/problem/1703/F

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 1), b;
    int count = 0;
    for (int i = 1; i <= n; i++){    
        cin >> a[i];
        if(a[i] < i){
            count += (lower_bound(b.begin(), b.end(), a[i])) - b.begin();
            b.push_back(i);
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


/*

We check for the elements where a[i] < i and store their index in vector b.
We calculate the lowerbound in the vector b for each value a[i] satisying the conditions
as all the previous values will also satisfy the condition so we add it to count.
Time Complexity: O(n log n)
Space Complexity: O(n)  

*/