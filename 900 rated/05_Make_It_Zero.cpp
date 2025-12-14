// Problem Link https://codeforces.com/problemset/problem/1869/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)   cin >> x;
    if (n % 2 == 0){
        cout << "2\n"; 
        cout << "1 " << n << "\n1 " << n << "\n";
    }
    else{
        cout << "4\n";
        cout << "1 " << n - 1 << "\n1 " << n - 1 << "\n";
        cout << n - 1 << " " << n << "\n" << n - 1 << " " << n << "\n";
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

The trick for this problem is that if we apply xor on a array of even length two times we get
0 as result.So we check is n is even then we simply apply xor from 1 to n two times.
And if array is odd we apply xor from 1 to n-1 two times then apply xor from n-1 to n two times.
Time Complexity: O(n)
Space Complexity: O(1)

*/