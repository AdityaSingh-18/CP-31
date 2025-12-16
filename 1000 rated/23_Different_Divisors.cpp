// Problem Link https://codeforces.com/problemset/problem/1474/B

#include <bits/stdc++.h>
using namespace std;

int primeFactor(int a){
    for (int i = a; ;i++){
        int flag = 1;
        for (int j = 2; j * j <= i; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag)    return i;
    }
}

void solve(){
    int d;
    cin >> d;
    int x = primeFactor(d + 1);
    int y = primeFactor(x + d);
    cout << x * y << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

The number must have atleast 4 factors so the first and fourth factor will always be 1 and the 
number itself. And as the factors should have atleast d difference so we try to find the factors with  
atleast d difference and not have any other factors. And their product will form the number.
Time Complexity: O(√p)
Space Complexity: O(1)

*/