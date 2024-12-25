#include<iostream>
using namespace std;

int FibonacciSeries(int n){
    if(n<=1) return n;

    return FibonacciSeries(n-1)+FibonacciSeries(n-2);
}


int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
        // Calling funcation recursively
        cout<<FibonacciSeries(n)<<endl;
    }
    return 0;
}