#include<bits/stdc++.h>
using namespace std;


void SumEqual(int ind, vector<int> &ds,int sum,int target, int arr[], int n){

    if(ind == n){

        if(sum==target){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[ind]);
    sum +=arr[ind];
    SumEqual(ind+1,ds,sum,target,arr,n);
    sum -= arr[ind];
    ds.pop_back();

    // Pick or pick Not
    SumEqual(ind+1,ds,sum,target,arr,n);    

}



// Below Funcation used to print only one subsequent
bool printonlyonesubsequence(int ind, vector<int> &ds,int sum,int target, int arr[], int n){

    if(ind == n){

        if(sum==target){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }

    ds.push_back(arr[ind]);
    sum +=arr[ind];
    if(printonlyonesubsequence(ind+1,ds,sum,target,arr,n)==true) return true;
    sum -= arr[ind];
    ds.pop_back();

    // Pick or pick Not
    if(printonlyonesubsequence(ind+1,ds,sum,target,arr,n)==true) return true;    

    return false;
}


/* Count Total number of subsequence */
int CountSubsequnece(int ind,int sum,int target, int arr[], int n){

    if(ind == n){

        if(sum==target) return 1;
        else return 0;
    }
    sum +=arr[ind];
    int l = CountSubsequnece(ind+1,sum,target,arr,n);
    sum -= arr[ind];

    // Pick or pick Not
    int r = CountSubsequnece(ind+1,sum,target,arr,n);    

    return l+r;
}


int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    int arr[] = {2,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=7;
    vector<int> ds;
    // Calling funcation recursively
     
     /*
     0 -> ind
     ds -> Data Structur
     0 -> till sum
     */

    /* Print all possible subsequcne*/
    SumEqual(0,ds,0,target,arr,n);

    /**Print Only one subsequence from Many*/
    // printonlyonesubsequence(0,ds,0,target,arr,n);

    // /* Count Total number of subsequence */
    // cout<<CountSubsequnece(0,0,target,arr,n)<<endl;
    return 0;
}