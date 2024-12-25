#include<bits/stdc++.h>
using namespace std;

void Permutations(vector<int> &arr, vector<int> &ds, vector<vector<int>> res,int freq[]){

    /* This code only used for print */
    if(ds.size()==arr.size()){
        res.push_back(ds);
        for(auto it:ds) cout<<it<<" ";
        cout<<endl;
        return;
    }
    
    for(int i=0;i<arr.size();i++){
        /*freq = {0,0,0} This is used for to make decision on pick and not pick */
        if(freq[i]!=1){
            ds.push_back(arr[i]);

            // Here marked that element of index i picked
            freq[i]=1;
            Permutations(arr,ds,res,freq);

            // Here Makered picked element as unpicked for future combination
            freq[i]=0;
            ds.pop_back();
        }
    }

}


int main(){

    /* ONLINE_JUDGE */
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    vector<int> arr = {1,2,3};
    vector<vector<int>> res;
    vector<int> ds;
    int freq[arr.size()];
    for(int i=0;i<arr.size(); i++) freq[i] = 0;
    Permutations(arr,ds,res,freq);

    return 0;
}