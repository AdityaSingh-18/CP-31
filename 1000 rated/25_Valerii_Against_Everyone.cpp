// Problem Link https://codeforces.com/problemset/problem/1438/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++){
        if(a[i] == a[i + 1]){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We can only make the sum of two subarray equal in this array if there is a pair of same element.
We can select those two elements as subarrays and thier sum will be equal.
So we sort the array and find a pair of same elements.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/