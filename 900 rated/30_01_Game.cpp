// Problem Link https://codeforces.com/problemset/problem/1373/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int count = 0;
    for (char c : s){
        if (c == '0')   count++;
    }
    int minCount = min (count, (int)s.size() - count);
    if (minCount % 2)     cout << "DA\n";
    else    cout << "NET\n"; 
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
}


/*

    We calculate the count value of 1 or 0 whichever is least occurring in the string. Whether more string can be 
    deleted or not is dependent on the count of least occurring character in the string as if there are no two 
    different characters in the string we cannot delete further.
    If the least occurring character is odd we print DA(Yes) otherwise NET(No).
    Time Complexity: O(n)
    Space Complexity: O(1)

*/