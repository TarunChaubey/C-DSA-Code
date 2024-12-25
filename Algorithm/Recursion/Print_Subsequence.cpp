#include<bits/stdc++.h>
using namespace std;

void PrintingSubsequences(int ind, vector<int> &ds, int arr[], int n){

    // Print at last when n==size of array i.e 3
    if(ind == n){
        for(auto it:ds) cout<<it<<"";
        
        if(ds.size() == 0) cout<<"{}";
        cout<<endl;
        return;
    }

    ds.push_back(arr[ind]);
    PrintingSubsequences(ind+1,ds, arr, n);
    ds.pop_back();


    // Pick and Not Pick Condition 
    PrintingSubsequences(ind+1,ds, arr, n);
}


int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int arr[] = {1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of Array :"<<n<<endl;

    // Calling funcation recursively
    vector<int> ds;
    PrintingSubsequences(0,ds,arr,n);

    return 0;
}