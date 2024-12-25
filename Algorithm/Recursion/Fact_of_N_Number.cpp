#include<iostream>
using namespace std;

int Fact(int n){
    if(n==1){
        return 1;
    }
    return n*Fact(n-1);
}


int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int N,t;

    cin>>t;
    while(t--){
        cin>>N;
        // Calling funcation recursively
        cout<<Fact(N)<<endl;
    }
    return 0;
}