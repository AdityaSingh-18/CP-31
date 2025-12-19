// Problem Link https://codeforces.com/problemset/problem/1527/B1

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zero = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == '0')    zero++;
    }
    if(zero == 0)   cout << "DRAW\n";
    else if(zero == 1 || zero % 2 == 0)  cout << "BOB\n";
    else    cout << "ALICE\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

If the number of zero's is 0 then its DRAW. If the number of zero's is 1 or even then its BOB. 
If the number of zero's is odd and and not 1 then its ALICE.
Ex-
If zero = 0 then no one spends any money as it is already 1's.
If zero = 2, 4 or 8 then Bob can always keep making the string palindrome until there are only
2 zero's left then we can reverse the string and win.
If zero = 3, 5 or 7 then first Alice will pay one time and then it again becomes palindrome and
now he can do the same thing to Bob until there are only 2 zero's left and then reverse and win it.
Time Complexity: O(n)
Space Complexity: O(n) 

*/