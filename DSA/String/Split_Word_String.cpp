#include<bits/stdc++.h>
using namespace std;



// Time Complexity = O(n)
// Space Complexity :-  O(n+1)
void ReverseSentenceUsingStack(string st){
    stack<string> strst;
    for(int i=0; i<st.length(); i++){
        string word=" ";
        while (st[i]!=' ' && i<st.length())
        {
            word+=st[i];
            i++;
        }
        strst.push(word);
    }
    
    while(!strst.empty()){
        cout<<strst.top()<<" ";
        strst.pop();
    }

}

int main(){
    string st= "Let's Take And Win or Loss";
    ReverseSentenceUsingStack(st);
    return 0;
}