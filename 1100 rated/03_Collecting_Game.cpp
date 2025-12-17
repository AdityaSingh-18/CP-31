// Problem Link https://codeforces.com/problemset/problem/1904/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    pair<int, int> a[n + 1];
    for (int i = 1; i <= n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a + 1, a + n + 1);
    int nxt[n + 1];
    ll sum[n + 1];
    int ans[n + 1];
    nxt[0] = 0;
    sum[0] = 0;
    for (int i = 1; i <= n; i++){
        if(nxt[i - 1] >= i){
            nxt[i] = nxt[i - 1];
            sum[i] = sum[i - 1];
        }
        else{
            sum[i] = sum[i - 1] + a[i].first;
            nxt[i] = i;
            while((nxt[i] + 1) <= n && sum[i] >= a[nxt[i] + 1].first){
                nxt[i]++;
                sum[i] += a[nxt[i]].first;
            }
        }
        ans[a[i].second] = nxt[i];
    }
    for (int i = 1; i <= n; i++){
       cout << ans[i] - 1 << " \n"[i == n];
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

We first store the array in pair array with value and index. we find the prefix sum p of array a. 
We calculate the answer in decreasing order of ai. To calculate the answer for an ai, we find the 
largest j such that pi≥aj and set the answer for i equal to the answer of j.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/