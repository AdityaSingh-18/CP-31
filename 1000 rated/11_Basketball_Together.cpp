// Problem Link https://codeforces.com/problemset/problem/1725/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N, D;
    cin >> N >> D;
    vector<int> a(N);
    for (int &i : a)    cin >> i;
    sort(a.begin(), a.end(), greater<int>());
    int count = 0, M = N;
    for (int i = 0; i < N && M > 0; i++){
        int req = (D + a[i]) / a[i];
        if(req > M){
            break;
        }
        count++;
        M = M - req;
    }
    cout << count << "\n";
}

int main(){
    solve();
}


/*

We first sort the array to get the max power candidates in front of the array.
Then we calculate the number of players requires to get the required power and reduce
the number of players remaining accordingly.If the required players gets higher than the
remaining players or no players remaining we break out of loop and print the result.
Time Complexity: O(n log n)
Space Complexit: O(n)

*/