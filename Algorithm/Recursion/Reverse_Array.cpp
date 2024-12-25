#include<iostream>
using namespace std;

void ReverseArrayRecusion(int i,int arr[],int n){
    if(i>n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    ReverseArrayRecusion(i+1,arr,n);
}

int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    // Calling funcation recursively
    ReverseArrayRecusion(0,arr,n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}