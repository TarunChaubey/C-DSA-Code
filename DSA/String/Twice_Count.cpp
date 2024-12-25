#include<bits/stdc++.h>
using namespace std;

class StringCounter{
    public:
    
        int countWords(string list[], int n)
        {
           unordered_map<string, int>mp; 
           for(int i =0; i < n; i++)
                mp[list[i]]++;
            int counter = 0; 
            for(auto x : mp)
            {
                if(x.second == 2)
                    counter++; 
            }
            return counter; 
        }
}


int main(){
    StringCounter obj;
    int t;
    cin>>t;
    // string s;
    list list1 = {"Geeks", "For", "Geeks"};
    while(t--){
        obj.Twice_Counter(list1);
    }
    return 0;
}