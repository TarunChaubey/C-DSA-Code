#include<bits/stdc++.h>
using namespace std;

void PrintAllPrimeNumber(vector<int> arr, int n){

    for(int i=2; i<sqrt(n); i++){
        cout<<i<<" ";
    }
}

int main(){
    int n=25;
    // cin>>n;
    vector<int> arr(n,0);
    for(auto itr:arr) cout<<itr<<" ";
    cout<<endl;
    PrintAllPrimeNumber(arr, n);
    
    return 0;
}