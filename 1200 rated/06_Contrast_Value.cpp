// Problem Link https://codeforces.com/problemset/problem/1832/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)   cin >> i;
    int count = 1;
    for (int i = 0; i < n - 1; ){
        if(a[i] == a[i + 1]){
            i++;
            continue;
        }
        if(a[i] < a[i + 1]){
            count++;
            while(i < (n - 1) && a[i] <= a[i + 1]){
                i++;
            }
        }
        else{
            count++;
            while(i < (n - 1) && a[i] >= a[i + 1]){
                i++;
            }
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

We need to count the number of times the direction changes from increasing to decreasing and vice 
versa. So we start with count 1 because we need atleast 1 element in sequence b and then iterate 
through the array and skip all the equal values as they dont contribute to the contrast sum.
We increase count when the direction change and keep iterating until it keeps increasing or
decreasing depending on the condition.
Time Complexity: O(n)
Space Complexity: O(n)

*/