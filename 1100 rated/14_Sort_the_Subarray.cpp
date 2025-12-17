// Problem Link https://codeforces.com/problemset/problem/1821/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &i : a)    cin >> i;
    for (int &i : b)    cin >> i;
    int diffL = -1, diffR = -1;
    for (int i = 0 ; i < n; i++){
        if (a[i] != b[i]){
            diffR = i;
            if(diffL == -1)    diffL = i;
        }
    }
    while (diffL > 0 && b[diffL - 1] <= b[diffL]){
        diffL--;
    }
    while (diffR < n - 1 && b[diffR + 1] >= b[diffR]){
        diffR++;
    }
    cout << diffL + 1 << " " << diffR + 1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first the leftmost and rightmost index where both the array differ. This will be the minimum
subarray he must have chosen for sorting.
Then we expand this subarray to both sides if possible by checking the conditions for elements at
diffL - 1 and diffR + 1 and update the values.
Time Complexity: O(n)
Space Complexity: O(n)

*/