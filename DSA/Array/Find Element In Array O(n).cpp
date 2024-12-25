#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> O(n)
//  Space complexity -> O(1)

int main(){
    int arr[10]  = {100,20,50,60,70,110,40,80,90,10};
    // cout<<"Enter Number"<<endl;
    // int n;
    // cin>>n;
    int n=10;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(n == arr[i]){
            cout<<n<<" at Index "<<i<<endl;
        }
    }
    
    return 0;
}