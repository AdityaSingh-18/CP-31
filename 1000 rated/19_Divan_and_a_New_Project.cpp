// Problem Link https://codeforces.com/problemset/problem/1614/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    vector<pair<int, int>> b(n);
    for (int i = 0; i < n; i++){
        b.push_back({a[i], i}); 
    }
    sort(b.begin(), b.end(), greater<>());
    ll sum = 0, j = 1;
    vector<int> c(n);
    for (int i = 0; i < n; i++){
        int k = b[i].second;
        if(i % 2 == 0){
            c[k] = j;
            sum += b[i].first * j;         
        }
        else{
            c[k] = -j;
            sum += b[i].first * j;
            j++;
        }
    }
    cout << 2 * sum << endl << 0 << " ";
    for (int i = 0; i < n; i++){
        cout << c[i] << " \n"[i == n - 1];
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

We store the vector elements in a pair vector of value and index to distinguish the same value elements.
Then we sort the array in descending order of times he will visit that building.
As the time spent is absolute of the difference of building from headquaters we place the most
visited buildings closest to the headquaters which we have at point 0. So as we iterate through
the sorted vector we assign their coordinates in the pattern 1 ahead and 1 behind,2 ahead and 2 behind,...
and so on. And calculate the sum of minutes spend in visiting.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/