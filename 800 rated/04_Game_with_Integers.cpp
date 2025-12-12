// Problem Link https://codeforces.com/problemset/problem/1899/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if (n % 3)    cout << "First\n";
    else    cout << "Second\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

If the number is currently not divisible by 3 then it will be divisible in when we add to subtract 1 to the number.
So Vanya wins when number is not divisible and and Voha wins when it is divisible.
Time Complexity: O(1)
Space Complexity: O(1)

*/