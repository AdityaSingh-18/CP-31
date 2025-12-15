// Problem Link https://codeforces.com/problemset/problem/1440/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int median = (n + 1) / 2, skip = (median - 1) * k, gap = 0;
    ll a, sumMedian = 0;
    for (int i = 1; i <= n * k; i++){
        cin >> a;
        if(skip){
            skip--;
            continue;
        }
        if (!gap){
            sumMedian += a;
            gap = n - median;
        }
        else   gap--;
    }
    cout << sumMedian << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
}


/*

There were two ways to do this problem.
We store the array and then iterate the array from right and take the sum of all the medians.
Also we can avoid storing array and directly take the sum of the medians by calculating the 
gap between medians which we also do in 1st method as well as we need to calculate the total
numbers to be skipped at start to make the sum of medians maximum.
Time Complexity: O(n * k)
Space Complexity: O(1)

*/