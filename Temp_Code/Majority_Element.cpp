#include<bits/stdc++.h>
using namespace std;

int MajorityElement(vector<int> &arr){
    vector<int> res(arr.size(),0);
    int final=0;
    for(int i=0;i<arr.size();i++){
        res[arr[i]]++;
    }
    for(auto itr: res){
        if(itr >abs(arr.size()/2)){
            final= res[itr];
        }
    }
    return final;
}

    /*Using Map*/
void UsingMap(vector<int> vect){
    map<int,int> mp;

    for(int i = 0;i<vect.size();i++){
        mp[vect[i]]++;
    }

    for(auto itr:mp){
        if(abs(vect.size())/2 < itr.second){
            cout<<itr.first<<" "<<itr.second<<endl;
        }
    }
}

int main(){

    /* ONLINE_JUDGE */
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    // vector<int> arr = {2,2,1,1,1,2,2};
    vector<int> arr = {2,2,1,1,1,2,2};
    // cout<<MajorityElement(arr);
    UsingMap(arr);
    return 0;
}