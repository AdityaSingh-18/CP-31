// Problem Link https://codeforces.com/problemset/problem/1765/M

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            ans = n / i;
            break;
        }
    }
    cout << ans << " " << n - ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We check if the number n have a divisor in the range 2 to square root of n and if there is a 
divisor then the values we get from that divisor will be optimal otherwise the most optimal 
answer will be 1 and n - 1.
Technically if the number n is prime then it will always have the answer 1 and n - 1 as it will 
not have any divisor in this range.
Time Complexity: O(√n)
Space Complexity: O(1) 

*/