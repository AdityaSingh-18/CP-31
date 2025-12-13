// Problem Link https://codeforces.com/problemset/problem/1788/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] == 2)   count++;
    }
    if(count % 2 == 0){
        for (int i = 0; i < n; i++){
            if (a[i] == 2)   count -= 2;
            if (count == 0){
                cout << i + 1 << "\n";
                return;
            }
        }
    }
    cout << "-1\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We have to find a point k in the array where product of both subarray are equal.
The 1's in the array does not affect the product of subarray so we calculate the count of 2's
in the array.And find the point where count of 2's in both subarray will be equal.
Space Complexity: O(n)
Time Complexity: O(n)

*/