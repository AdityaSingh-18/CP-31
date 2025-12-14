// Problem Link https://codeforces.com/problemset/problem/1794/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] == 1)  a[i]++;
    }    
    for (int i = 0; i < n - 1; i++){
        if (a[i + 1] % a[i] == 0)    a[i + 1]++;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " \n"[i == n - 1];
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

If there is any 1 in the array we increment it.Then we iterate the array and check if
element at ai+1 is divisible by ai.If not we increment the element at ai+1 by 1.This way
the elements at ai+1 will not be divisible by ai.
Time Complexity: O(n)
Space Complexity: O(n)

*/