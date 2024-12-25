#include<bits/stdc++.h>
using namespace std;

int FrogJum(int ind, vector<int> &arr){

    if(ind==0) return 0;

    int left = FrogJum(ind-1,arr) + abs(arr[ind]-arr[ind-1]);
    int right = FrogJum(ind-2,arr) + abs(arr[ind]-arr[ind-2]);
    return min(left,right);
}


int main(){

    /* ONLINE_JUDGE */
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    vector<int> vect = {0,1,3,5,6,8,12,17};
    // Calling funcation recursively
    cout<<FrogJum(vect.size()-1,vect);

    return 0;
}