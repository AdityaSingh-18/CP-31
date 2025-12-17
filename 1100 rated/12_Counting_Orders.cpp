// Problem Link https://codeforces.com/problemset/problem/1827/A 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    ll mod = 1e9 + 7;
    for (auto &i: a)    cin >> i;    
    for (auto &i: b)    cin >> i;
    sort(a.begin(), a.end(), greater<ll>());    
    sort(b.begin(), b.end(), greater<ll>());
    ll total = 1, count = 0, j = 0;
    for (int i = 0; i < n; i++){
        while(j < n && a[j] > b[i]){
            j++;
            count++;
        }
        total = (total * count) % mod;
        count--;
    }    
    cout << total << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first sort both the vectors in descending order.
Then we compare each element of b from 0 to n - 1 and calculate the number of elements of 
vector a greater than that element to get the number of choices we have at each position.
We decrease the count by 1 after each iteration because we use 1 element already at current 
position so now we are left with count - 1 choices.
Time Complexity: O(n log n)
Space Complexity: O(n) 

*/