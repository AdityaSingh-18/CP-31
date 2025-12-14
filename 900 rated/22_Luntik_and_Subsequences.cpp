// Problem Link https://codeforces.com/problemset/problem/1582/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll x, count0 = 1, count1 = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == 0)    count0 *= 2;
        if (x == 1)    count1++;
    }
    cout << count0 * count1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
}


/*

If the sum of array is S then the subsequence with sum S-1 can only be created by removing exactly one
1 from the array.The array will result in more subsequences if there are 0 in the array.
If there are multiple 1 then each 1 will result in 1 extra sequence and if there multiple 0 then each 0 will 
result in exponential increase in subsequnces so in total it will be count of 1 * (count of 0 ^ 2) 
Time Complexity: O(n)
Space Complexity: O(1)

*/