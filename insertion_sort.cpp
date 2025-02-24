#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[],int size){
    
    for(int i=1 ; i<size ;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key ;
    }
}


int main(){
    int arr[] = {10,2,4,9,11,7};
    int size = 6;

    insertion_sort(arr,size);
    for(int i=0;i<size ;i++)
        cout << arr[i] << " ";


    return 0;
}