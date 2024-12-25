#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}


int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int N;
    cin>>N;
    // Calling funcation recursively
    
    cout<<sum(N)<<endl;
    return 0;
}