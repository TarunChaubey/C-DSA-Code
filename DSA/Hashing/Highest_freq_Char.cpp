#include<bits/stdc++.h>
using namespace std;

//  Analysize Algorithm
//  Time CcoMlexity -> 
//  Space coMlexity ->

int main(){
    string str = "TARUNCHAUBEY";

    map<char,int> M;

    for(int i=0; str[i]; i++){
        M[str[i]]++;
    }

    map<char,int> ::iterator it = M.begin();

    for(auto& it : M){
        cout<<it.first<<" - "<<it.second<<endl;
    }
}