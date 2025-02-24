#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter array size : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
     
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[10] = {0};

    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }
    int max = 0,hi;
    int min = 10,mi;
    for(int i = 0; i < 10; i++){
        if(hash[i]>max){
            max = hash[i];
            hi = i;
        }
        if(hash[i]<min && hash[i]!=0){
            min = hash[i];
            mi = i;
        }
    }

    cout << "the most repeating is "<<hash[hi] <<"and the least repeating is " << hash[mi];
    cout << "\n";
    cout << max << min;

    return 0;

}