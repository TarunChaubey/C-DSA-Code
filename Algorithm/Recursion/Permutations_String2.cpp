#include<bits/stdc++.h>
using namespace std;


// Optimize One
void Permutations(int ind,vector<int> &arr,vector<vector<int>> res){

    /* This code only used for print */
    if(ind==arr.size()){
        for(auto it:arr) cout<<it<<" ";
        cout<<endl;
        return;
    }
    
    for(int i=0;i<arr.size();i++){
        swap(arr[ind],arr[i]);
        Permutations(ind+1,arr,res);
        swap(arr[ind],arr[i]);
        }
}


int main(){

    /* ONLINE_JUDGE */
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    vector<int> arr = {1,2,3};
    vector<vector<int>> res;
    Permutations(0,arr,res);

    return 0;
}