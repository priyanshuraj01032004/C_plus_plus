#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number : ";
    cin >> n;
    if(n == 20){
        cout<<"very low \n";
    }
    else if (n > 20 && n < 40){
        cout << "ok ok marks \n";
    }
    else{
        cout << "above average ";
    }

    return 0;
}