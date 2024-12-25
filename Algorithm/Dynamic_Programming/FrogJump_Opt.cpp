#include <bits/stdc++.h>

using namespace std;

int forgjuspSpaceoptimization(int n, vector<int> &arr){
    int prev = 0;
    int prev2 = 0;

    for(int i=1;i<n;i++){
        int fs = prev + abs(arr[i] - arr[i-1]);
        int ss = INT_MAX;

        if(i > 1) ss = prev + abs(arr[i] - arr[i-2]);

        int curi = min(fs,ss);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}

int solve(int ind, vector<int>& height, vector<int>& dp){
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int jumpTwo = INT_MAX;
    int jumpOne= solve(ind-1, height,dp)+ abs(height[ind]-height[ind-1]);
    if(ind>1)
        jumpTwo = solve(ind-2, height,dp)+ abs(height[ind]-height[ind-2]);
    
    return dp[ind]=min(jumpOne, jumpTwo);
}


int main() {

    /* ONLINE_JUDGE */
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  vector<int> dp(n,-1);
//   cout<<solve(n-1,height,dp);
    cout<<forgjuspSpaceoptimization(n,height)<<endl;
}