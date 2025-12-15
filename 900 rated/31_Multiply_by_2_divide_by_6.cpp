// Problem Link https://codeforces.com/problemset/problem/1374/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int countTwo = 0, countThree = 0;
    while (!(n % 2)){
        n /= 2;
        countTwo++;
    }    
    while (!(n % 3)){
        n /= 3;
        countThree++;
    }
    if (n == 1){
        if (countTwo <= countThree){
            cout << countThree + countThree - countTwo << "\n";
        }
        else   cout << -1 << "\n";
    }
    else    cout << -1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

As we know the number n is divisible by 6 if it has factor 2 and 3 in it.
So, we calculate the count of 2 and 3 factors in n. Tf n is not a complete factor of 2 and 3 then we cannot
make n to 1 by using these operations. If the factor of 2 in n is more than 3 then it is not possible to
change it to 1 because we cannot multiply n by 3 to match the number of factors of 2 and 3 in n. 
Otherwise the number of operations needed to change it into 1 are countThree because of dividing by 6 plus
countThree - countTwo to match the count of factor 2 and 3 by multiplying  by 2.
Time Complexity: O(log n)
Space Complexity: O(1)

*/

