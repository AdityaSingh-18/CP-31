// Problem Link https://codeforces.com/problemset/problem/1807/G2

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n; 
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    sort(a.begin(), a.end());
    if(a[0] != 1){
        cout << "NO\n";
        return;
    }
    ll sum = 1;
    for(int i = 1; i < n; i++){
        if(sum < a[i]){
            cout << "NO\n";
            return;
        }
        sum += a[i];
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first sort the array and check whether the first element is 1 or not as the array a starts with
the element 1 so the first element must always be 1.
As we can make any number using subsequence between 1 to sum of current subarray so we compare the
current sum with the next element in sorted array.
If the sum is less than the next element then there is no way to choose a subsequence to make the next
element.
Otherwise we can make the element and increase the sum by value of next element. If all the elements 
in the array can be made then we print Yes otherwise No.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/