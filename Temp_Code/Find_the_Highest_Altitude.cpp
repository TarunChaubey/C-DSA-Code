#include<bits/stdc++.h>
using namespace std;

int HighestAltitude(vector<int> gain){
    int max_alt=0;
    int curr_alt=0;
    for(int i=0;i<gain.size();i++){
        curr_alt+=gain[i]; 
        // max_alt=max(curr_alt, max_alt);

        if(curr_alt>max_alt) max_alt=curr_alt;
    }
    return max_alt;
}

int main(){

    /* ONLINE_JUDGE */
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    vector<int> arr = {-5,1,5,0,-7};
    vector<int> arr1 = {-4,-3,-2,-1,4,3,2};
    cout<<HighestAltitude(arr)<<endl;
    cout<<HighestAltitude(arr1)<<endl;
    // vector<int,greater>
    cout<<pow(10,4)<<endl;
    return 0;
}