#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter array size : ";
    cin >> n;
    int arr[n];

    cout << "enter arrya element : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[13] ={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }

    int q;
    cout << "enter the numbers of element to search" ;
    cin >> q;
    while(q--){
        int numbers;
        cout << "enter number : ";
        cin >> numbers;
        cout << hash[numbers] << endl;
    }

    return 0;
}