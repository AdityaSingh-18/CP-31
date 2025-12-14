// Problem Link https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    vector<int> freq(26);
    for (auto c : s)    freq[c - 'a']++;
    for (auto i : freq){
        if (i % 2)    count++;
    }
    if ((count - k) < 2)    cout<< "YES\n";
    else   cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We have to first calculate the frequency of each character in string.We then find the
number of characters with odd frequencies.If the number of characters with odd freq
are less than or equal to k+1 we can always make the string palindrome after removing k
characters.
Time Complexity: O(n)
Space Complexity: O(1)
 
*/