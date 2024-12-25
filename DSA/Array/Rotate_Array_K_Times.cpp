#include<bits/stdc++.h>
using namespace std;


int main(){

    int k;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    // Array Before Rotation
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }

    // Number Times rotate array
    // cout<<"Enter Number"<<endl;
    // cin>>k;
    k = 3;
    cout<<endl;

    // Rotation Array K times
    for(int i=0;i<=k;i++){
        int temp = arr[i];
        arr[i] = arr[sizeof(arr)/sizeof(arr[0])-i];
        arr[sizeof(arr)/sizeof(arr[0])-i] = temp;
    }

    // Array After Rotation
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}