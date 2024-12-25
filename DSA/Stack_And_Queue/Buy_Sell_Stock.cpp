#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm


//  Time Ccomplexity -> O(n^2)
//  Space complexity -> O(1)
void BruteForceSolution(int arr[], int n){
    int max = 0;
    for( int i=0;i<n;i++){
        for(int j = i +1;j<n;j++){
            if(arr[j] - arr[i] > max){
                max = arr[j] - arr[i];
            }
        }
    }
    cout<<"Maximum Profit Can Be Gain: "<<max<<endl;
}


//  Time Ccomplexity -> O(n^2)
//  Space complexity -> O(1)
void Best_Solution(){

    return 0;
}

int main(){
    int arr[] = {3,10,4,1,6,7,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    // BruteForceSolution(arr,n);
    Best_Solution(arr,n);
    return 0;
}