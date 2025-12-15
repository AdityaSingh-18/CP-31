// Problem Link https://codeforces.com/problemset/problem/1380/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, left, mid;
    cin >> n >> left >> mid;
    int right, found = 0;
    for (int i = 3; i <= n; i++){
        cin >> right;
        if (left < mid && mid > right && !found){
            cout << "YES\n";
            cout << i - 2 << " " << i - 1 << " " << i << endl;
            found = 1;
        }
        left = mid;
        mid = right;
    }
    if(!found)    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
}


/*

We iterate the array and check if mid element is greater than left and right element or not.
We output the indices of these three elements if they satisfy the condition and mark it as found.
If no such combination is found in the array then we print NO.
Time Complexity: O(n);
Space Complexity: O(1)

*/