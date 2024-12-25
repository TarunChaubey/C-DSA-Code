#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> 
//  Space complexity ->

// Methods -
// 1. By Creating Void Array
    //      Time Complexity - 


void PrintArray(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i]!=1 || a[i]!=0);{
            cout<<a[i]<<" ";
        }
    }
}


void FindDuplicate(int a[], int s){
    int temp[s] = {0};
    for(int i=0; i<s; i++){
        temp[a[i]]++;
    }
    PrintArray(temp,s);
}

int main(){
    int a[] = {2,4,6,8,2,0,8,4};
    int size = sizeof(a)/sizeof(a[0]);
    FindDuplicate(a,size);
    // cout<<size<<endl;
    return 0;
}