// Given a list of words followed by two words, the task to find the minimum distance between the given two words in the list of words


// Example 1:

// Input:
// S = { "the", "quick", "brown", "fox", 
//      "quick"}
// word1 = "the"
// word2 = "fox"
// Output: 3
// Explanation: Minimum distance between the 
// words "the" and "fox" is 3

#include<bits/stdc++.h>
using namespace std;

int ClosestStrings(vector<string> st,string word1,string word2){
    int idx1=0, idx2=0;
    for(int i=1;i<st.size()+1;i++){
        if(st[i]==word1){
            idx1 = i;
        }

        if(st[i]==word2){
            idx2 = i;
        }
    }
    return abs((idx1-idx2));
}

int main(){
    // vector<string> st;
    // string word1, word2;
    // int t,idx;

    vector<string> st = {"geeks", "for", "geeks", "contribute", 
     "practice"};
    string word1 = "geeks", word2 = "practice";
    int t=1,idx;

    // cin>>t;
    while(t--){
        idx = ClosestStrings(st,word1,word2);
        cout<<idx<<endl;
    }
    return 0;
}