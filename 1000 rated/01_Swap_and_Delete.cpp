// Problem Link https://codeforces.com/problemset/problem/1913/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int countZero = 0, countOne = 0;
    for (char c : s){
        if (c == '0')   countZero++;
        else    countOne++;
    }
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '0'){
            if (!countOne)    break;
            countOne--;
        }
        else{
            if (!countZero)    break;
            countZero--;
        }
    }
    cout << countZero + countOne << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

As the initial string and the resulting string should not have same characters at the same index,
we calculate the number of 0's and 1's in the strings.We then try to stimulate the operation to flip
the character at the index.
So if the character is 0 we decrease the count of 1 because it will be swapped by 1 and vice versa.
We continue this operation until we iterate to a character whose flip character count is already zero so
we cannot flip the character anymore further.
Time Complexity: O(n)
Space Complexity: O(1)

*/