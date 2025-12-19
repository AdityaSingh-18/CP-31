// Problem Link https://codeforces.com/problemset/problem/1635/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    bool sort = true;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(i && a[i] < a[i - 1])    sort = false;
    }
    if(a[n - 2] > a[n - 1]){
        cout << -1 << "\n";
    }
    else{
        if(a[n - 1] < 0){
            if(sort)    cout << 0 << "\n";
            else    cout << -1 << "\n";
        }
        else{
            cout << n - 2 << "\n";
            for (int i = 1; i <= n - 2; i++){
                cout << i << " " << n - 1 << " " << n << "\n";
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

If the last element is smaller than second last element then we cant change it into increasing 
order. Also if last element is less than 1 then the array has to be sorted otherwise we cant
change any unsorted element into sorted way. Otherwise we can do n - 2 operations on index i
and last two elements it will make the array sorted in increasing order.
Time Complexity: O(n)
Space Complexity: O(n)

*/