#include<bits/stdc++.h>
using namespace std;


void CombinationSum(int ind,int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
    if(ind==arr.size()){
        if(target==0){
            ans.push_back(ds);
            for(auto it:ds) cout<<it<<"";
        }
        return;
    }

    if(arr[ind] <= target){
        ds.push_back(arr[ind]);
        CombinationSum(ind+1,target-arr[ind],arr, ans, ds);
        ds.pop_back();
    }
    CombinationSum(ind+1,target-arr[ind],arr, ans, ds);
}

int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    vector<int> arr = {2,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]); 
    int target=7;
    vector<vector<int>> ans;
    vector<int> ds;
    CombinationSum(0,target, arr, ans, ds);
    return 0;
}