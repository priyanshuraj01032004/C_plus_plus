#include <bits.stdc++.h>
using namespace std;

void merge_sort(int arr[],int left,int mid,int right){
    int n1 = mid - left + 1 ;
    int n2 = right - mid ;

    int l[n1],r[n2];

    for(int i=0;i<n1;i++) l[i] = arr[left + i];
    for(int i=0;i<n2;i++) r[i] = arr[mid + i + 1];


    int i=0,j=0,

}