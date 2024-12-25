#include<bits/stdc++.h>
using namespace std;

int main(){

    /* Time Complexity O(n) */
    /* Space Complexity O(n) */

    freopen("input.txt","rb",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int prev2=0;
    int prev = 1;
    for(int i=2;i<=n;i++){
        int curr = prev2 + prev;
        prev2 = prev;
        prev = curr;
    }
    cout<<prev<<endl;
}