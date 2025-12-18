// Problem Link https://codeforces.com/problemset/problem/1848/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> last(k, -1);
    vector<int> maxStep(k), secondMax(k);
    for (int i = 0; i < n; i++) {
        int step = i - last[a[i] - 1];
        if (step > maxStep[a[i] - 1]) {
            secondMax[a[i] - 1] = maxStep[a[i] - 1];
            maxStep[a[i] - 1] = step;
        } 
        else if (step > secondMax[a[i] - 1])    secondMax[a[i] - 1] = step;
        last[a[i] - 1] = i; 
    }
    int ans = 1e9;
    for (int i = 0; i < k; i++) {
        int step = n - last[i];
        if (step > maxStep[i]) {
            secondMax[i] = maxStep[i];
            maxStep[i] = step;
        } 
        else if (step > secondMax[i])    secondMax[i] = step;
    }
    for (int i = 0; i < k; i++){
        ans = min (ans, max((maxStep[i] + 1) / 2, secondMax[i]));
    }
    cout << ans - 1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We calculate the last occurrence of a color and the max and second max distance between 
planks for each color. The most optimal plank to recolor will be the max of half of largest 
distance or second largest distance. We store the min of this for each color and print the 
answer at last.
Time Complexity: O(n)
Space Complexity: O(n)

*/