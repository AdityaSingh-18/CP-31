// Problem Link https://codeforces.com/problemset/problem/1883/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int isDivisible = 0, countTwo = 0, minNeeded = k, hasFour = 0;
    for (int &i : a){
        cin >> i;
        if (i % k == 0)    	isDivisible = 1;
        if (i % 2 == 0)    	countTwo++;
		if (i % 4 == 3)	   	hasFour = 1;
		minNeeded = min (minNeeded, (k - (i % k)) % k);
    }    
    if (isDivisible){
        cout << 0 << "\n";
        return;
    }
    if (k != 4)    cout << minNeeded << "\n";
    else{
        if (countTwo > 1)    cout << 0 << "\n";
        else if (countTwo == 1 || hasFour)    cout << 1 << "\n";
        else    cout << 2 << "\n";
	}
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We iterate through the array and find the minimum operation needed to make a element divisible by k.
Al so there is a special case when k is 4 as it is a multiple of 2.
If there are 2 or more even numbers then their product will be divisible by 4.
If there is 1 even number then we can make another element even using 1 operation.
If there 0 even number then we can either make a element multiple of 4 or make two element even 
to make their product divisible by 4.
Time Complexity: O(n)
Space Complexity: O(n)

*/