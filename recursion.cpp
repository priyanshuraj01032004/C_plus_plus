#include <bits/stdc++.h>
using namespace std;

void funct(int n){
    if(n == 0){
        return;
    }
    
    funct(n-1);
    cout << n << " ";
}

void sum1(int n,int &sum){
    if(n==0){
        return;
    }

    sum = sum + n;
    sum1(n-1,sum);
}


void fact1(int n,int &fact){
    if(n==1){
        return;
    }

    fact = fact*n;
    fact1(n-1,fact);
}

int main(){
    int n,sum = 0,fact = 1;
    cout << "enter a number : ";
    cin >> n;
    // sum1(n,sum);
    fact1(n,fact);
    cout << fact;
    return 0;
}