// Problem Link https://codeforces.com/problemset/problem/1704/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, a;
    cin >> n >> x >> a;
    int high = a, low = a, count = 0;
    for (int i = 1; i < n; i++){
        cin >> a;
        if (max (high, a) - min (low, a) <= 2 * x){
            high = max(high, a);
            low = min(low, a);
        }
        else{
            count++;
            high = a;
            low = a;
        }   
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We first mark the first element as high and low bound of the range.
As we iterate through the array if the new low and high bound are withing the 
range of 2x we update them otherwise we reset the high and low bound and increase count.
Time Complexity: O(n)
Space Complexity: O(1)

*/