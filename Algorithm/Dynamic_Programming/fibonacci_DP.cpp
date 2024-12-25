#include<bits/stdc++.h>
using namespace std;


/* Time Complexity - O(n^2)> */
/* Space Complexity -> O(n+1)- */
int Fibo(int n, vector<int> &dp){
    if(n<=1) return n;

    if(dp[n]!=-1) return dp[n];

    return dp[n] = Fibo(n-1,dp) + Fibo(n-2,dp);

}

int main(){

    /* ONLINE_JUDGE */
    freopen("input.txt","rb",stdin);
    freopen("output.txt","w",stdout);

    int n;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        // Intinalize array of size n+1 and assign -1 
        vector<int> dp(n+1,-1);
        cout<<Fibo(n,dp)<<endl;
    }
    return 0;
}