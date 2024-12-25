#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int,int> s;
    int q;
    int x,y;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>x>>y;
        s.insert(make_pair(x,y));
    }

    for(auto it:s){
        cout<<it<<" ";
    }
    return 0;
}
