// Problem Link https://codeforces.com/problemset/problem/1632/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int k = 0;
    while((1 << (k + 1)) <= n - 1){
        k++;
    } 
    for(int i = (1 << k) - 1; i >= 0; i--){
        cout << i << " ";
    }
    for(int i = (1 << k); i < n; i++){
        cout << i << " \n"[i == n - 1];
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

We find the largest power of 2 not exceeding n-1.Then we it print numbers from that power minus one down to 0, 
and afterwards prints the remaining numbers up to n-1.
This guarantees a permutation with minimal maximum XOR between adjacent elements.  
Time Complexity: O(n)
Space Complexity: O(1)

*/