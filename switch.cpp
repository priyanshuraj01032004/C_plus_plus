#include <bits/stdc++.h>
using namespace std;

int main(){
    char grade;
    cin >> grade ;
    switch(grade){
        case 'A':
            cout << "very good";
            break;
        
        case 'B':
            cout <<  "good";
            break;

        case  'C':
            cout << "average" ; 
            break;

        default :
            cout << "not specified" ;


    }

    return 0;
}