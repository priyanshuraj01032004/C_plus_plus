#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int n,int i){
    if(i >= n/2){
        return;
    }

    swap(arr[i],arr[n-i-1]);
    reverse_array(arr,n,i+1);
}


int main(){
    int n;
    cout << "enter array size : ";
    cin >> n;
    int arr[n];

    cout << "enter array element : ";

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int i=0;
    reverse_array(arr,n,i);

    for(int i=0 ; i<n ; i++){
        cout << arr[i];
    }

}