#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] =  {2,3,5,1,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=1 ; i<size ; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    int sum;
    cout << "enter the sum value  ";
    cin >> sum;
    int temp = 0,count = 0;
    for(int i = 0 ; i<size ; i++){
        if(temp < sum){
            temp = arr[i] + temp;
            count++ ;
        }
    }

    if(temp == sum){
        cout << count;
    }else{
        cout << "nope ";
    }


    return 0;

}