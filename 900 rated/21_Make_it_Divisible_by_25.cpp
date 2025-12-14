// Problem Link https://codeforces.com/problemset/problem/1593/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int firstDigit(string &s, char a){
	int count = 0;
	while(!s.empty() && s.back() != a){
		count++;
		s.pop_back();
	}
	return count;
}

int secondDigit(string &s, char a, char b, int specialCase){
    if(!s.empty())   s.pop_back();
	int count = 0;
	while(!s.empty() && s.back() != a && s.back() != b){
		count++;
		s.pop_back();
	}
	if(s.empty() && specialCase)	count++;
	return count;
}

void solve(){
	ll n;
	cin >> n;
    string s = to_string(n);
	string s1 = s; 
    string s2 = s;
	int count1 = firstDigit(s1, '0');
	int count2 = firstDigit(s2, '5');
	int count3 = secondDigit(s1, '0', '5', 0);
	int count4 = secondDigit(s2, '2', '7', 1);
	cout << min ((count1 + count3), (count2 + count4)) << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


/*

We solve this by taking two cases:
In 1st case we solve by finding last digit of number 0 and in other we solve by finding last
digit 5.
Then we try to find the 2nd digit to make number divisible by 25 and atlast we calculate the total
count in both the cases and take the minimum one. 
Time Complexity: O(log n)
Space Complexity: O(1)

*/