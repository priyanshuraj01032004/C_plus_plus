#include <bits/stdc++.h>
using namespace std;


void selection_sort(int arr[],int size){

    for(int i=0 ; i<size-1; i++){
        
        int min_index = i;
        for(int j = i+1;j<size ;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }

}


int main(){
    int arr[] = {12,10,11,13,14,9};
    int size = 6;
    for (int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    selection_sort(arr,size);
    for (int i=0 ; i<6 ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}