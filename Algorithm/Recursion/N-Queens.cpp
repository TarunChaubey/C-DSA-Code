#include<bits/stdc++.h>
using namespace std;

void NQueens(){

}


int main(){

    /* ONLINE_JUDGE */
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,i=0;
    cin>>n;
    // Calling funcation recursively
    NQueens(i,n);

    return 0;
}