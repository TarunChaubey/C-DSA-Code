#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "5F3Z-2e-9-w";
    string new_s;
    int i = 0;
    while (i++<s.size())
    {
        if(s[i] == '-')
            new_s.push_back("");
        else{
            new_s.push_back(s[i]);
        }
    }
    cout<<new_s<<endl;
    return 0;
}