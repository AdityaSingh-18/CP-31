// Problem Link https://codeforces.com/problemset/problem/1497/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll x;
    vector<int> freq(k, 0);
    for (int i = 0; i < n; i++){
        cin >> x;
        freq[x % k]++;
    }
    int count = 0;
    if(freq[0]) count++;
    for (int i = 1; i <= (k / 2); i++){
        int diff = abs(freq[i] - freq[k - i]);
        if(freq[i] && freq[k - i]){
            count++;
            if(diff)    diff--;
        }
        count += diff;
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We can group complement remainders in a single group. So first we take input and store
the freq of remainder in a vector. As we can put all the elements with remainder 0 in a 
single group we increment count by 1.Then we iterate from i to  k / 2 and calculate the 
absolute difference the complement remainders i and k - i. If both the complements have freq
greater than 0 then we make a group for those elements. In the group we can have one extra
element of the remainder with higher freq. Now the remaining elements of higher freq have to
make single element groups.
Time Complexity: O(n)
Space Complexity: O(n)

*/