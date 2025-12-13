// Problem Link https://codeforces.com/problemset/problem/1805/A

#include <bits/stdc++.h>
using namespace std;

void solve(){   
    int n;
    cin >> n;
    int x, Xor = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        Xor ^= x;
    }
    if (n % 2 == 0)   cout << (Xor == 0 ? Xor : -1) << "\n";
    else    cout << ((Xor >= 0 && Xor < 256) ? Xor : -1) << "\n"; 
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}

/*

We first calculate the Xor of the array.If n is even then Xor should be 0.For odd length of array
we check if the Xor is between 0 to 256 or not because of the constraints.
Time Complexity: O(n)
Space Complexity: O(1)

*/