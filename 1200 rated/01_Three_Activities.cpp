// Problem Link https://codeforces.com/problemset/problem/1914/D

#include <bits/stdc++.h>
#define ll long long
using namespace std;

array<int, 3> getMaxThreeIndices(vector<ll> a, int n){
    array<int, 3> idx = {-1, -1, -1}; 
    for (int i = 0; i < n; i++){
        if(idx[0] == -1 || a[i] > a[idx[0]]){
            idx[2] = idx[1];
            idx[1] = idx[0];
            idx[0] = i;
        }
        else if(idx[1] == -1 || a[i] > a[idx[1]]){
            idx[2] = idx[1];
            idx[1] = i;
        }
        else if(idx[2] == -1 || a[i] > a[idx[2]]){
            idx[2] = i;
        }
    }
    return idx;
}

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    for (auto &i : a)    cin >> i;
    for (auto &i : b)    cin >> i;
    for (auto &i : c)    cin >> i;
    auto topA = getMaxThreeIndices(a, n);
    auto topB = getMaxThreeIndices(b, n);
    auto topC = getMaxThreeIndices(c, n);
    ll maxSum = 0;
    for (int i : topA){
        for (int j : topB){
            for (int k : topC){
                if(i != j && j != k && k != i){
                    maxSum = max (maxSum, a[i] + b[j] + c[k]);
                }
            }
        }
    }
    cout << maxSum << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first store the arrays and find the indices of the 3 maximum elements in each array in one linear pass.
Then we iterate through all the combination of indices of find the maximum sum where all three indices of 
arrays are different.
Time Complexity: O(n + 3^3)
Space Complexity: O(n) 

*/