#include<bits/stdc++.h>
using namespace std;


int main(){

    /* ONLINE_JUDGE */
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int num,t;
    cin>>t;
    while(t--){
        cin>>num;
        bool flag = false;
        if(num < 0 ){
            flag=true;
            num = abs(num);
        };

        int res=0;
        while (num>0)
        {
            res = res*10+num%10;
            num = num/10;
        }
        if(flag == true) cout<<0-res<<endl;
        else cout<<res<<endl;
    }
    return 0;
}