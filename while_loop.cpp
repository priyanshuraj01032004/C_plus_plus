#include <bits/stdc++.h>
using namespace std;

int main(){
    int n =10,i=1;
    int factorial = 1;

    while(i<n+1){
        factorial = factorial * i;
        i++;
    }
    cout << "the factorial of the number " << n << " is " << factorial;

    return 0;
}


