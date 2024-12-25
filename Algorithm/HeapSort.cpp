#include<iostream>
using namespace std;



int PrintArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main() {
    int arr[7] = {9,5,1,4,8,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array Before Sorting"<<endl;
    PrintArray(arr,n);

    // HeapSort(arr,n)
    // cout<<"Array After Sorting"<<endl;
    // PrintArray(arr,n);
}
