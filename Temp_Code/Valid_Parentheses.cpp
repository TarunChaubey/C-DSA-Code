#include<bits/stdc++.h>
using namespace std;

bool ValidParentheses(string s){
    stack<char> st;

    // if(s.empty()) return true;

    char c;
        stack<char> st;
        for(s[i] == '(' || s[i] == '{'  || s[i] == '['){
                st.push(s[i]);
                continue;
            if(st.empty()){
                ans = false;
            }
            switch(s[i]){
                case '(':
                    if(st.top() == '('){
                        char c = st.top();
                        st.pop();
                    }
                    if(c =='{' || c == ']'){
                        return false;
                    }

                case '}':
                    if(st.top() == '}'){
                        char c = st.top();
                        st.pop();
                    }
                    if(c == '(' || c == ']'){
                        return false;
                    }


                case ']':
                    if(st.top() == ']'){
                        char c = st.top();
                        st.pop();
                    }
                    if(c == '{' || c == ')'){
                        return false;
                    }
                        
                }
        }

}

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    string s;
    bool res;

    cin>>t;
    while (t--)
    {
        cin>>s;
        res = ValidParentheses(s);
        cout<<res<<endl;
    }
    
}