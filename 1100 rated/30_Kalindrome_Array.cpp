// Problem Link https://codeforces.com/problemset/problem/1610/B

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int> a, int n, int x){
    vector<int> b(n);
    int m = 0;
    for (int i = 0; i < n; i++){
        if(a[i] != x)    b[m++] = a[i];
    }
    for (int i = 0; i < m / 2; i++){
        if(b[i] != b[m - i - 1])    return false;
    }
    return true;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    int palindrome = 1;
    for (int i = 0; i < n / 2; i++){
        if(a[i] != a[n - i - 1]){
            palindrome = (palindrome && isPalindrome(a, n, a[i]));
            if(!palindrome){
                palindrome = (palindrome || isPalindrome(a, n, a[n - i - 1]));
            }
            break;
        }
    }
    if(palindrome)     cout << "YES\n";
    else    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first store the array and check if its already palindrome or not. If there is any index
at which ai and a(n - i) are not equal then we have to check whether the array will become palindrome
after removing all the occurence of ai or a(n - i) from the array. So we check for both the values and
if the array does becomes palindrome in both the cases then we cannot make the array palindrome.
Time Complexity: O(n)
Space Comeplexity: O(n)

*/