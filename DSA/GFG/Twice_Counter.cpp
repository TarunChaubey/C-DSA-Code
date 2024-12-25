#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=0;
    string str = "12l";
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])){
            num = num*10 + (str[i]-48);
        }
        else{
            return -1;
        }
    }
    cout<<num*10<<endl;
    return 0;
}