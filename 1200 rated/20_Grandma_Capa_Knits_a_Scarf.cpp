// Problem Link https://codeforces.com/problemset/problem/1582/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> a;
    for (int i = 0; i < n; i++){
        a.insert(s[i]);
    }
    int minCount = 1e18;
    while(!a.empty()){
        char c = *a.rbegin();
        int count = 0, flag = 1;
        for (int j = 0, k = n - 1; j < k; ){
            if(s[j] == s[k]){
                j++;
                k--;
            }
            else if(s[j] == c){
                count++;
                j++;
            }
            else if(s[k] == c){
                count++;
                k--;
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag){
            minCount = min (minCount, count);
        }
        a.erase(a.find(c));
    }
    cout << (minCount == 1e18 ? -1 : minCount) << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We use brute force and two pointers for check the number of characters need to be removed
to make the string palindrome. We store all the unique characters in the string using set and
then find the number of characters to be removed for each character and store the minimum.
Time Complexity: O(n) worst case (26 * n)
Space Complexity: O(k)

*/