#include<bits/stdc++.h>
using namespace std;

void Solution(vector<int> V){

    unordered_map<int,bool> M;

    for(int val:V){
        M.insert({val,true});
    }
    map<int,bool> ::iterator it;

    for(auto val:M){
        if(iterator=M.find(val.first-1)){
            M.insert({val,false});
        }
    }

    for(auto x:M){
        cout<<x.first<<"  "<<x.second;
        cout<<endl;
    }
}

int main(){
    vector<int> v = {36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42};
    // for(auto x:v){
    //     cout<<x<<" ";
    // }

    Solution(v);

    return 0;
}