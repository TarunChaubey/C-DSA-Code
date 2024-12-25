#include<iostream>
using namespace std;

void PrintLinear(int i,int n){
    if(i>n){
        return;
    }
    cout<<n-i<<" ";
    PrintLinear(i+1,n);
}

int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,i=0;
    cin>>n;
    // Calling funcation recursively
    PrintLinear(i,n);

    return 0;
}