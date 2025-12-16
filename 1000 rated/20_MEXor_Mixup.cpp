// Problem Link https://codeforces.com/problemset/problem/1567/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    int Xor;
    if (a % 4 == 1)  Xor = a - 1;
    else if (a % 4 == 2)  Xor = 1;
    else if (a % 4 == 3)  Xor = a;
    else  Xor = 0;
 
    if (Xor == b) cout << a << "\n";
    else if ((Xor ^ b) == a)  cout << a + 2 << "\n";
    else  cout << a + 1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We calculate the Xor of the array by using modulous a%4.
Then we compare it with the given the given Xor(b) and if it's equal then we dont need to add any more 
element in array.
If Xor nor equal to b then we check if Xor^b is equal to a or not if it is equal we need to add 2 extra 
element to not effect MEX.
And if its not equal then we only need 1 extra element.
Time Complexity: O(1)
Space Complexity: O(1)

*/