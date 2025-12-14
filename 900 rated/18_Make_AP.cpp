// Problem Link https://codeforces.com/problemset/problem/1624/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if ((2 * b > c && (2 * b - c) % a == 0) || (a + c) % (2 * b) == 0 || (2 * b > a && (2 * b - a) % c == 0)){ 
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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

As we know three numbers A,B,C are in AP if 2 * B = A + C, So using this formula we can check that
considering two numbers in AP whether the third number is in AP or can be changed to AP by multiplication.
Time Complexity: O(1)
Space Complexity: O(1)

*/