#include<bits/stdc++.h>
using namespace std;

void SubsetSum2(int ind, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
    ans.push_back(ds);

    /* These tow line to print details*/
    for(auto it:ds) cout<<it<<" ";
    cout<<endl;
    
    for(int i=ind; i<arr.size(); i++){
        if(i!=ind && arr[i] == arr[i-1]) continue;
        ds.push_back(arr[i]);
        SubsetSum2(ind+1,arr,ans,ds);
        ds.pop_back();
    }
}


int main(){

    /* ONLINE_JUDGE */
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    vector<vector<int>> ans;
    vector<int> ds;
    vector<int> arr = {1,2,2,3,3,5};
    // Calling funcation recursively
    SubsetSum2(0,arr,ans,ds);

    return 0;
}