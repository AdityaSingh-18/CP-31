// Problem Link https://codeforces.com/problemset/problem/1656/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    if(n == 1){
        if(a[0] == k)    cout<< "YES\n";
        else    cout << "NO\n";
        return;
    }
    sort(a.begin(), a.end());
    int i = 0, j = 1;
    while(j < n && i < n){
        if(a[i] + k == a[j]){
            cout << "YES\n";
            return;
        }
        if(a[i] + k > a[j])    j++;
        else    i++;
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

If the difference between any two element in the array is equal to k then it is possible to make the 
resulting array into k.
So we first sort the array and then use two pointers i and j to check the difference between two 
element and if we find two element with difference equal k then its possible to make the resulting
array after operations equal k otherwise not.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/