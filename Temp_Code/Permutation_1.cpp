#include<bits/stdc++.h>
using namespace std;

void Permutation(int ind, vector<int> &arr, vector<int> &ds){
    if(ind == arr.size()){
        for(auto itr:ds) cout<<itr<<" ";
        cout<<endl;
        return;
    }
    if(ind == 0) cout<<"{}"<<endl;

    ds.push_back(arr[ind]);
    Permutation(ind+1,arr,ds);
    ds.pop_back();

    /* Not Pick*/
    Permutation(ind+1,arr,ds);
}

int main(){
    
    vector<int> arr = {1,2,3,0,0};
    vector<int> ds;
    Permutation(0,arr,ds);
}