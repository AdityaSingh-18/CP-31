// Problem Link https://codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int &i : a)	 cin >> i;
	if (k == 1){
		for (int i = 0; i < n - 1; i++){
			if (a[i] > a[i + 1]){
				cout << "NO\n";
				return;
			}
		}
		cout << "YES\n";
	}
	else    cout << "YES\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


/*

Any array can be sorted by swapping two elements so if the value of k is 2 or more array can be sorted.
But if the value of k is 1 then we cannot swap any element so the array should be already sorted.
If array is sorted we print YES otherwise NO.
Time Complexity: O(n)
Space Complexity: O(n)

*/