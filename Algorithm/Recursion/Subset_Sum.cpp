#include<bits/stdc++.h>
using namespace std;

void SubsetSum(int ind, int target, vector<int> &arr, vector<int> &ds){
    // if(ind == arr.size()) return;
    if(target==0){
        for(auto it:ds) cout<<it<<" ";
        cout<<endl;
        return;
    }

    /* pick the element*/
    SubsetSum(ind+1, target+arr[ind], arr, ds);

    /* Do not pick the element*/
    SubsetSum(ind+1, target,arr[ind], arr, ds);
}


int main(){

    /* ONLINE_JUDGE */
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    vector<int> arr = {3,1,2,2};
    vector<int> ds;
    int target = 5;
    // Calling funcation recursively
    SubsetSum(0, target, arr, ds);

    return 0;
}