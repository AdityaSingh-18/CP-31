// Problem Link https://codeforces.com/problemset/problem/1666/D

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s, t;
    cin >> s >> t;
    string x = "";
    int n = s.size();
    int m = t.size();
    vector<int> freqWord(26, 0), freqTerm(26, 0);
    for (char i : s)  freqWord[i - 'A']++;
    for (char i : t)  freqTerm[i - 'A']++;
    for (int i = 0; i < n; i++){
        if (freqWord[s[i] - 'A'] ==0 && freqTerm[s[i] - 'A'] == 0)    continue;
        if (freqTerm[s[i] - 'A'] > freqWord[s[i] - 'A']){
            cout << "NO\n";
            return;
        }
        else if ((freqWord[s[i] - 'A'] - freqTerm[s[i] - 'A']) > 0)   freqWord[s[i] - 'A']--;
        else   x.push_back(s[i]);
    }
    if (x == t)    cout << "YES\n";
    else    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We first calculate the frequencies of characters in both the strings and check conditions to
add only those characters whose freq in both strings are equal.
At last we compare the new string formed with t and print the result.
Time Complexity: O(n + m)
Space Complexity: O(n + m)(auxiliary O(1))

*/