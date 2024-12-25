#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr2[5] = {1,2,3,4,9};
    int arr1[7] = {1,3,5,8,10,12,14};

    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);

    // Temp Array Used To Store Size Sorted Array
    int temp[s1+s2];
    int k=0;

    int i=0;
    int j=0;

    if(s2>s1){
        while (s2--)
        {
            if(arr1[i] <= arr2[j]){
                cout<<arr1[i]<<" ";
                i++;
                temp[k] = arr1[i];
                k++;
            }
            else{
                cout<<arr2[j]<<" ";
                j++;
                temp[k] = arr2[j];
                k++;
            }
        }
        while (j < sizeof(arr2)/sizeof(arr2[0]))
        {
            cout<<arr2[j]<<" ";
            j++;
            temp[k] = arr2[j];
            k++;
        }
    }

    else{
        while (s1--)
        {
            if(arr1[i] <= arr2[j]){
                cout<<arr1[i]<<" ";
                i++;
                temp[k] = arr1[i];
                k++;
            }
            else{
                cout<<arr2[j]<<" ";
                j++;
                temp[k] = arr2[j];
                k++;
            }
        }
        while (i < sizeof(arr1)/sizeof(arr1[0]))
        {
            cout<<arr1[i]<<" ";
            i++;
            temp[k] = arr1[i];
            k++;
        }
    }

    // cout<<endl<<"Printing Elemnt of Temp Array: "<<endl;
    // for(auto x:temp){
    //     cout<<x<<" ";
    // }
    return 0;
}