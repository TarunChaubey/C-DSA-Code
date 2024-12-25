#include<bits/stdc++.h>
using namespace std;
void UniqueCombinatiomSum(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){

    if(target == 0){
        ans.push_back(ds);
        for(auto itr:ds) cout<<itr<<" ";
        return;
    }

    for(int i=ind; i<arr.size(); i++){
        if(i>ind && arr[i] ==arr[i-1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[ind]);
        UniqueCombinatiomSum(i+1,target-arr[ind], arr, ans, ds);
        ds.pop_back();
    }
}


int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    vector<int> arr = {10,1,2,7,6,1,5};
    vector<vector<int>> ans;
    vector<int> ds;
    int target = 8;
    // Calling funcation recursively
    UniqueCombinatiomSum(0,target,arr, ans, ds);

    return 0;
}