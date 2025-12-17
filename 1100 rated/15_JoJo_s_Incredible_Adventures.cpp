// Problem Link https://codeforces.com/problemset/problem/1820/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    s += s;
    ll maxOnes = 0, count = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '1')    count++;
        else    count = 0;
        maxOnes = max (maxOnes, count);
    }
    if (maxOnes >= n)    cout << n * n << "\n";
    else    cout << ((maxOnes + 1) * (maxOnes + 1)) / 4 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first concatenate the string so that we can easily count the 1's when they are at leftmost or 
rightmost positions.
Then we count the maxLength of the consecutive 1's in the string possible after cyclic rotation.
If count is more than or equal to n then it means the string have all 1's so maximum area of rectangle
will be n*n.
If its less than n then it means the string contains 0 as well and the maximum area of rectangle
will be (maxLength of 1's + 1) ^ 2 / 4.
Time Complexity: O(n)
Space Complexity: O(1)

*/