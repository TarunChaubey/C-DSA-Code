#include<bits/stdc++.h>
using namespace std;

int CountLengh(int n){
    int length=0;
    while(n>0){
        n=n/10;
        length++;
    }
    return length;
}

int main(){
    int a = 12345;
    int size = CountLengh(a);
    int sum=0;
    cout<<size<<endl;
    while(a>9){
        // cout<<pow(10,size-1)<<" ";
        cout<<a%(pow(10,size))<<" ";
        a = a/10;
        size--;
    }
    // cout<<sum+a<<endl;
    return 0;
}