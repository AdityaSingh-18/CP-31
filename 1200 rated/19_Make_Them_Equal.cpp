// Problem Link https://codeforces.com/problemset/problem/1594/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    bool flag = true;
    for (int i = 0; i < n; i++){
        if(s[i] != c){
            flag = false;
        }
    }
    if(flag){
        cout << 0 << "\n";
        return;
    }
    for (int i = 1; i <= n; i++){
        flag = true;
        for (int j = i; j <= n; j += i){
            if(s[j - 1] != c){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << 1 << "\n";
            cout << i << "\n";
            return;
        }
    }
    cout << 2 << "\n";
    cout << n - 1 << " " << n << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

If the string already have all the characters equal c then we need 0 operations.
Otherwise we check for the multiple of i from 1 to n and check if there is a value
whose all multiple value index in string dont have character c. If there is a value
then we can use it for the operation.
If there is no such value then we can use n and n - 1 value to change all the values to 
the character c as n will change all characters in string to c except index n. And 
n - 1 will change the character at index n equal character c.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/