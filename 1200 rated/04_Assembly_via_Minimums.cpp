// Problem Link https://codeforces.com/problemset/problem/1857/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int m = (n * (n - 1)) / 2;
    vector<int> a(m);
    for (int &i : a)   cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i += n){
        cout << a[i] << " ";
        n--;
    }
    cout << a[m - 1] << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

The elements in the array b will have this pattern:
The lowest element will occur in array b for n - 1 times and second lowest element
will occur n - 2 times and so on.
So if we sort the array and print the elements at the index gap of n - 1,n - 2, and so
on then we will get the original array.
For last element since it will be the highest element in the array a and will not occur in 
array b it is not possible to determine the exact number so we can use any number from an-1 
to 10^9 so we will use an-1 always.
Time Complexity: O(n * n log n)
Space Complexity: O(n)

*/