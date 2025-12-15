// Problem Link https://codeforces.com/problemset/problem/1831/B

#include <bits/stdc++.h>
using namespace std;

void maxSub(unordered_map<int, int> &maxA, vector<int> &a, int n){
    for (int i = 0; i < n; ){
        int j = i;
        while (j < n && a[i] == a[j])    j++;
        maxA[a[i]] = max (maxA[a[i]], j - i);
        i = j;
    }
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &i : a)    cin >> i;
    for (int &i : b)    cin >> i;
    unordered_map<int, int> maxA, maxB;

    maxSub(maxA, a, n);
    maxSub(maxB, b, n);

    int maxCount = 0; 
    for (auto &it : maxA) {
        int val = it.first;
        int lenA = it.second;
        int lenB = maxB[val];
        maxCount = max(maxCount, lenA + lenB);
    }
    for (auto &it : maxB) {
        int val = it.first;
        int lenB = it.second;
        int lenA = maxA[val];
        maxCount = max(maxCount, lenA + lenB);
    }
    cout << maxCount << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We use unordered map to store the count of max subArray for each element in both the arrays.
Then we iterate through 1st arrays unordered map and calculate the sum of a elements 
subArray to the length of the same element in other array.
Then we do the same with the other array and find the max length of the subArray can be
formed by merging both the arrays.
Time Complexity: O(n)
Space Complexity: O(n)

*/