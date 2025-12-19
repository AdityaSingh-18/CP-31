// Problem Link https://codeforces.com/problemset/problem/1539/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for (auto &i : a)   cin >> i;
    sort(a.begin(), a.end());
    vector<ll> group;
    for (int i = 0; i < n - 1; i++){
        while (i < n - 1 && a[i + 1] - a[i] <= x)    i++;
        if(i < n - 1)   group.push_back((a[i + 1] - a[i] - 1) / x);
    }
    if((int)group.size() == 0){
        cout << 1 << "\n";
        return;
    }
    sort(group.begin(), group.end());
    ll count = 0;
    for (auto &i : group){
        if(k - i >= 0){
            k -= i;
            count++;
        }
    }
    cout << (int)group.size() - count + 1 << "\n";
}

int main(){
    solve();
}


/*

We first sort the array and iterate through the array and find index where difference between
elements is more than x. We then store the difference - 1 / x to get the number of new elements needed
to join the groups. We then sort the values of group and try to find the max number of groups we can 
join using k new elements.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/