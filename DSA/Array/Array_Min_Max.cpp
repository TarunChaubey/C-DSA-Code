#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> O(n)
//  Space complexity -> O(1) + O(1)

int main(){
    int arr[] = {1,4,6,9,100,10,3,2,7,0,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int min=INT_MAX,max=INT_MIN;

    if(size == 0){
        return -1;
    }

    if(size == 1){
        int min = arr[0];
        int max = arr[0];
    }

    if(size == 2){
        if(arr[0] > arr[1]){
            max = arr[0];
            min = arr[1];
        }
        
        if(arr[0] < arr[1]){
            max = arr[1];
            min = arr[0];
        }
    }

    for(int i=2;i < sizeof(arr)/sizeof(arr[0])-1;i++){
        if(arr[i]> max){
            max = arr[i];
        }

        if(arr[i]<min){
            min = arr[i];
        }
    }

    cout<<"Min : "<<min<<" Max : "<<max<<endl;

    return 0;
}