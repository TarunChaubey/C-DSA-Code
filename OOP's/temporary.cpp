#include<iostream>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t,a,b;
    cin>>t;
    while(t>0){
        cin>>a>>b;
        cout<<a+b<<endl;
        t--;
    }
    return 0;
}