#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(string s,int n,int i){
    if(i>=n/2){
        return true;
    }
    if(s[i] != s[n-i-1])
        return false;
    else
        check_palindrome(s,n,i+1);
}


int main(){
    int n,i=0;
    string s;
    cout << "enter a string : ";
    cin >> s;
    n = s.length();
    bool flag = check_palindrome(s,n,i);
    if(flag == true){
        cout << "yes ";
    }else{
        cout << "no";
    }

    return 0;
}