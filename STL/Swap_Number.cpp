#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int main(){
    int x,y;
    cin>>x>>y;
    vector<int> v1;
    v1.push_back(x);
    v1.push_back(y);
    std::swap(v1[0],v1[1]);
    cout<<v1[0]<<" "<<v1[1];
    return 0;
}