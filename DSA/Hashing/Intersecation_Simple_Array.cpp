#include<bits/stdc++.h>
using namespace std;

// Complexity
// Time Complexity = O(n*m)
// Space Complexity = O(1)

int main(){
    int ar1[] = {2,4,10,8,5};   // n
    int ar2[] = {3,4,5,2,8};    // m

    // int size1 = sizeof(ar1)/sizeof(ar1[0]);
    // int size2 = sizeof(ar2)/sizeof(ar2[0]);

    for(int i=0; i < sizeof(ar1)/sizeof(ar1[0]) ; i++){
        int j=0;
        while(j<sizeof(ar2)/sizeof(ar2[0])){
            if(ar1[i] == ar2[j]){
                cout<<ar1[i]<<" ";
                j++;
            }
            j++;
        }
    }
    return 0;
}