#include<iostream>
using namespace std;

int main(){
    // string st = "bad is good";
    string st;
    cin>>st;
    string res="";
    string word="";
    
    for(int i=0; i<st.length(); i++){
        string word="";
        while(st[i]!=' ' && i<st.length())
        {
            word+=st[i];
            i++;
        }
        res+=word[0];
    }
    cout<<res<<endl;
    return 0;
}