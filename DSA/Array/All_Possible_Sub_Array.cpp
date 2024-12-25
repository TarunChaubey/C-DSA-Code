#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> 
//  Space complexity ->

int main(){
    // int a[6] = {1,4,6,9,8,2};
    int a[7] = {7,5,-13,5,10,-2,5};
    int size = sizeof(a)/sizeof(a[0]);

    for(int i=0;i < size;i++){
        int j=i;
        while(j < size){
            cout<<a[i]<<","<<a[j]<<"  ";
            j++;
        }
        cout<<endl;
    }
    return 0;
}