#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time Ccomplexity -> 
//  Space complexity ->

int main(){

    int ar[]  = {10,5,9,1,11,8,6,15,3,12,2};
    int size = sizeof(ar)/sizeof(ar[0]);

    unordered_map<int,bool> M;

    for(int var:ar){
        M.insert({var,true});
    }

    cout<<M.count(5,true)<<endl;


    // for(auto& val:M){
    //     cout<<val.first<<" ";
    // }


    return 0;
}