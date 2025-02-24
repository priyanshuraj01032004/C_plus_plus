#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int size){

    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main(){
    int arr[] = {10,2,4,9,11,7};
    int size = 6;

    bubble_sort(arr,size);
    for(int i=0;i<size ;i++)
        cout << arr[i] << " ";


    return 0;
}