#include<bits/stdc++.h>
using namespace std;

void GetAllCommon(vector<int> v1, vector<int> v2){

    unordered_map<int ,int> M;

    for(int i=0; i<v1.size(); i++){
        M[v1[i]]++;
    }

    // for(int i=0; i<v2.size(); i++){
    //     M[v2[i]]++;
    // }

    for(int i=0;v2.size();i++){
        if(std::find(v2.begin(),v2.end(),v2[i]) && 
    }

    for(auto x:M){
        cout<<x.first<<"-";
        cout<<x.second;
        cout<<endl;
    }
}

int main(){
    vector<int> v1 = {1,2,2,5,3,4,5,6};
    vector<int> v2 = {0,1,2,3,4,5,2,5,6};

    GetAllCommon(v1,v2);

    return 0;
}