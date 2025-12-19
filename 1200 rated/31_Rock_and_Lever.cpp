// Problem Link https://codeforces.com/problemset/problem/1420/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)   cin >> i;
    vector<ll> maxBit(31, 0);
    for (int i = 0; i < n; i++){
        for (int j = 30; j >= 0; j--){
            if(a[i] & (1 << j)){
                maxBit[j]++;
                break;
            }
        }
    }
    ll sum = 0;
    for (int i = 0; i < 31; i++){
        sum += (maxBit[i] * (maxBit[i] - 1)) / 2;
    }
    cout << sum << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We calculate the frequency of most significant 1-bit of each element in the array and then
group the elements with same most significant 1-bit. Then we calculate the number of pairs as
(x * x - 1) / 2.
Time Complexity: O(n)
Space Complexity: O(n)

*/