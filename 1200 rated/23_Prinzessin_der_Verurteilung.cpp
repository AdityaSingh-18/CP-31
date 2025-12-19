// Problem Link https://codeforces.com/problemset/problem/1536/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> a(18278, false); 
    for (int i = 0; i < n; i++){ 
        if(!a[s[i] - 'a']) a[s[i] - 'a'] = true; 
        if(i < (n - 1) && !a[26 * (s[i] - 'a' + 1) + s[i + 1] - 'a']){ 
            a[26 * (s[i] - 'a' + 1) + s[i + 1] - 'a'] = true; 
        } 
        if(i < (n - 2) && !a[26 * 26 * (s[i] - 'a' + 1) + 26 * (s[i + 1] - 'a' + 1) + s[i + 2] - 'a']){ 
            a[26 * 26 * (s[i] - 'a' + 1) + 26 * (s[i + 1] - 'a' + 1) + s[i + 2] - 'a'] = true; 
        } 
    } 
    for (int i = 0; i < 18278; i++){ 
        if(!a[i]){ 
            if(i >= (26 * 27)){ 
                cout << (char)((i / (26 * 27)) + 96); 
                i %= (26 * 26); 
            } 
            if(i >= 26){ 
                cout << (char)((i / 26) + 96);
                i %= 26; 
            }    
            cout << (char)(i + 97) << "\n"; 
            return; 
        }
    }   
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We check for all the substring of atmost 3 length which is present in the string
and mark them true. Then we find the first substring not present in the string and
calculate the substring using the formula of dividing and changing the number into character
using ASCII values.
Time Complexity: O(n)
Space Complexity: O(n)

*/