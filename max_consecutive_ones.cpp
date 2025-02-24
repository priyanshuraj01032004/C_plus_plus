#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,1,1,2,1,1,1,1,2,1,1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int count ;
    int max_count = 0;

    for(int i=0; i<size ; i++){
        count = 0;
        for(int j=i;j<size;j++){
            if(arr[j]==1){
                count =count + 1;
            }
            else{
                break;
            }
        }
        if(count>max_count){
            max_count = count;
        }
    }

    cout << "the maximum number of cosecutive 1's are "<< max_count;

    return 0;

}