#include<iostream>
using namespace std;

void PrintLinear(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    PrintLinear(n-1);
}

int main(){

    // ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    // Calling funcation recursively
    PrintLinear(n);

    return 0;
}