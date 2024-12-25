#include<iostream>
#include<map>
using namespace std;

int RomantoInteger(string s){
    int add=0;
    map<char, int> romanMap = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}};

    if(s.empty()) return add;

    for(int i=0;i<s.length();i++){
        if(romanMap[s[i]] >= romanMap[s[i+1]]){
            add = add + romanMap[s[i]];
            }
        else{
        add = add - romanMap[s[i]];  
        }
    }
    return abs(add);
}


int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,res;
    string s;

    cin>>t;
    while(t>0){
        cin>>s;
        res = RomantoInteger(s);
        cout<<res<<endl;
        t--;
    }

    return 0;    
}