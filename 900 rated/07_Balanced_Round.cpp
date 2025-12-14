// Problem Link https://codeforces.com/problemset/problem/1850/D

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int maxBalanced = 1;
    for (int &i : a)   cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++){
        int count = 1;
        while (i < n - 1 && (a[i + 1] - a[i]) <= k){
            count++;
            i++;
        }    
        maxBalanced = max(maxBalanced, count);
    }
    cout << n - maxBalanced << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We get the balanced sequence we need to find the max length of sequence of array with 
atmost k difference between adjacent elements.We first sort the array so that it becomes
easy to find the difference between two closest numbers in array.Atlast we subtract the 
longest sequence length from n to get the number of elements to be removed.
Time Complexity: O(nlogn)(Sorting)
Space Complexity: O(n)

*/