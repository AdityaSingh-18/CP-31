// Problem Link https://codeforces.com/problemset/problem/1790/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)     cin >> i;
    sort(a.begin(), a.end());
    int maxFreq = 1, freq = 1, count = 1;
    for (int i = 0; i < n - 1; i++){
        if(a[i + 1] == a[i]){
            freq++;
            if(maxFreq < freq){
                maxFreq = freq;
                count++;
            }
            continue;
        }
        maxFreq = freq;
        freq = 1;
        if((a[i + 1] - a[i]) > 1){
            count++;
            maxFreq = 1;
        }
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

We need more dolls in this problem in two cases when the size of the dolls are not continous and when
there are multiple dolls of the same size.
So we first sort the sizes and keep track of the freq of size of current doll and keep updating the freq
as we move ahead and increase the count. We also increement the count when the difference of current and 
next doll is more than 1. And atlast print the total count of dolls we need.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/