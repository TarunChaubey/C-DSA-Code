#include<bits/stdc++.h>
using namespace std;

vector<int> ans;

vector<int> ReturnSubSequence(int x,vector<int> vect,vector<int> curr){
    if(i>=2) return;

    ans.push_back(curr);
    for(int i=x; i<vect.size(); i++){
        curr.push_back(vect[i]);
        ReturnSubSequence(i+1, vect,curr);
        curr.pop_back(vect[i]);
    }


}

int main(){
    int t;

    vector<int> vect = {3,1,2};
    vector<int> curr;
    ReturnSubSequence(0,vect,curr);
}