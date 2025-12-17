// Problem Link https://codeforces.com/problemset/problem/1899/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    int maxSum = a[0];
    for (int i = 0; i < n; i++){
        int sum = a[i];
        maxSum = max (maxSum, sum);
        if(a[i] > 0){
            while(i < n - 1 && (abs(a[i]) % 2 != abs(a[i + 1]) % 2) && (sum + a[i + 1]) > 0){
                sum += a[i + 1]; 
                i++;
                maxSum = max (maxSum, sum);
            }
        }
    }
    cout << maxSum << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

/*
    We check for the max value of sum either by individual element or sum of multiple element.
    For sum of multiple elements we first check for the condition of parity as well as make sure
    that the new element does not make the less than 1 otherwise it is better to start with new
    subarray which is greater than 0.
    Time Complexity: O(n)
    Space Complexity: O(n)
*/



//  Using Kadane's Algorithm

/*
    In this algorithm we declare finalSum and currentSum and keep adding the elements to current sum
    and if the currentSum becomes greater than finalSum we currentSum to finalSum.
    So atlast the finaLSum will have the largest sum possible for a contiguous subarray.
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    int maxSum = a[0], current = a[0];
    for (int i = 1; i < n; i++){
        if(abs(a[i]) % 2 == abs(a[i - 1]) % 2)    current = a[i];
        else    current = max (a[i], current + a[i]);
        maxSum = max (maxSum, current); 
    }
    cout << maxSum << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}