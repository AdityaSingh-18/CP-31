// Problem Link https://codeforces.com/contest/1601/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; i++){
        cin >> x;
        for (int j = 0; j < 31; j++){
            if(x & (1 << j)){
                a[j]++;
            }
        }
    }
    int GCD = 0, flag = 1;
    for (auto &i : a){
        flag = 0;
        if(GCD == 0)    GCD = i.second;
        else{
            GCD = gcd(GCD, i.second);
        }
    }
    if(flag){
        for (int i = 0; i < n; i++) {
			cout << i + 1 << " \n"[i == n - 1];
		}
		return;
	}
	vector<int> fact;
	for (int i = 1; i * i <= GCD; i++) {
		if (GCD % i == 0) {
			fact.push_back(i);
			if (i != GCD / i)	fact.push_back(GCD / i);
		}
	}
	sort(fact.begin(), fact.end());
	for (int f : fact) {
		cout << f << " ";
	}
	cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}