#include<bits/stdc++.h>
using namespace std;

string RemoveAdjDuplicate(string s){
    stack<char> char_st;
    for(int i=0;i<s.size();i++){

        // we push only when stack is empty or top of stack is not equal to s[i] 
        if(char_st.empty() || char_st.top()!=s[i]){
            char_st.push(s[i]);
        }

        // we above condition false means top of stack is equal to s[i] so we will pop 
        else{
            char_st.pop();
        }
    }

    // here copy element of stack into string to re
    string res="";
    while(!char_st.empty()){
        res=char_st.top()+res;
        char_st.pop();
    }
    return res;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        string res;
        res = RemoveAdjDuplicate(s);
        cout<<res<<endl;;
        }
    return 0;
}