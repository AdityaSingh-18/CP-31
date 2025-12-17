// Problem Link https://codeforces.com/problemset/problem/1917/B

#include <bits/stdc++.h>
using namespace std;

int countDistinct(string &s, int n) {
    vector<bool> isVisited(26, false);
    int count = 0;
    for (int i = 0; i < n; i++){
        if (!isVisited[s[i] - 'a']){
            isVisited[s[i] - 'a'] = true;
            count += n - i;
        }
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << countDistinct(s, n) << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

In the problem applying the second operation and then the first is equivalent to applying the first 
operation twice. So the second operation is never done before the first operation. 
So, for each character we find it's first occurrence. If the character is found, any number of second type 
operations lead to a different result. Then we just count the number of second operations for each 
character and add then to get the total count.
Time Complexity: O(n)
Space Complexity: O(1)

*/