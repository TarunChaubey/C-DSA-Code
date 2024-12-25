#include<bits/stdc++.h>
using namespace std;

bool Ispar(string x){
    stack<char> s;
    char a;

    for(int i=0; i<x.length();i++){
        if(x[i] == '(' || x[i] == '{'  || x[i] == '['){
            s.push(x[i]);
            continue;
        }

        if(s.empty()){
            return false;
        }

        switch(x[i]){
            case ')':
                a = s.top();
                s.pop();
                if(a == '{' || a == '['){
                    return false;
                }

            case '}':
                a = s.top();
                s.pop();
                if(a == '(' || a == '['){
                    return false;
                }

            case ']':
                a = s.top();
                s.pop();
                if(a == '{' || a == ')'){
                    return false;
                }
        }
        return s.empty();
    }
}

int main(){
    string bal = "[()]{}{[()()]()}";
    string nan_bal = "{[[(}";
    bool res = Ispar(bal);
    cout<<res<<endl;
    // if(res = 0){
    //     cout<<"Yes"<<endl;
    //     }
    // else{
    //     cout<<"No"<<endl;
    // }
    return 0;
}