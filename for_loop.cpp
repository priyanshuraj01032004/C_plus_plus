#include <bits/stdc++.h>
using namespace std;


int main(){
    int n , m;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0 && j%2==0){
                cout << i <<" and " << j <<"\n"; 
            }
        }
    }

    return 0;

}