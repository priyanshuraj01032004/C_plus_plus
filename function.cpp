#include <bits/stdc++.h>
using namespace std;

//pass by value does not change the original value of the variable
void mult(int num){
    num = num*num;
    cout << "the function mult number is " << num  << endl;
}

//pass by reference changes the original variable and modifies it
void add(int &num1){
    num1 = num1 + 2;
    cout << "the function add number is " << num1 << endl;
}

int main(){
    int n=10,x=12;
    cout<<"the initial numbers are " << n << " " << x << endl;
    mult(n);
    add(x);
    cout<<"the final numbers are " << n << " " << x << endl;
    
    
    
    return 0;

}