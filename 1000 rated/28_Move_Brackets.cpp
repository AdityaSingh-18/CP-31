// Problem Link https://codeforces.com/problemset/problem/1374/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int moveCount = 0, count = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '(')    count++;
        else    count--;
        if (count < 0){
            count++;
            moveCount++;
        }
    }
    cout << moveCount << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

A bracket sequence is regular if every '(' is matched with a ')' in the correct order.  
In this code, we track the balance of brackets while scanning the string:  
- When we see '(', we increase the balance.  
- When we see ')', we decrease the balance.  
If the balance ever goes negative, it means there are more ')' than '(' so far, which is invalid.  
To fix this, we count one move and adjust the balance back (as if we moved a ')' to the end).  
The total number of such fixes gives the minimum moves required.
Time Complexity: O(n)  
Space Complexity: O(1)  

*/