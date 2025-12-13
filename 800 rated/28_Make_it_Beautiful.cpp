// Problem Link https://codeforces.com/problemset/problem/1783/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)   cin >> i;
    sort(a.begin(), a.end(), greater<int>());
    if (a.front() == a.back()){
        cout << "NO\n";
        return;
    }
    if(a[0] == a[1]){
        for (int i = 2; i < n; i++){
            if (a[0] != a[i]){
                swap(a[0], a[i]);
                break;
            }
        }
    }
    cout << "YES\n";
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

The sum of two elements can be equal to third element if the third element is greater than the
previous two elements.But if we sort the array in decreasing order then the third number can 
never be greater than the previous two.And if all the elements in the array are equal then we 
cant make the array beautiful.
One more case is that when the 1st two elements in sorted array are equal then we find a element in 
the array not equal to the 1st element and swap it.
Time Complexity: O(nlogn)(Sorting)
Space Complexity: O(n)

*/