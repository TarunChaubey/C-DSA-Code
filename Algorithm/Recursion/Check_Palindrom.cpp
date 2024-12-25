#include<iostream>
using namespace std;

bool CheckPalindrom(int i,string s,int n){
    bool ans;
    if(i>n/2) return ans;
    if(s[i] == s[n-i-1]) ans = true;
    else ans=false;
    CheckPalindrom(i+1,s,n);

    return ans;
}

int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int n = s.size();
        cout<<CheckPalindrom(0,s,n)<<endl;
    }
    return 0;
}