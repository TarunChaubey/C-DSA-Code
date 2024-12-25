#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void Solution(vector<pair<int,int>> v){
    int sum = 0;
    for(auto it : v){
        sum = sum +it.second; 
    }
    cout<<sum;
}

int main(){
    int N;
    cin>>N;
    vector<pair<int,int>> v;
    for (int i = 0; i < N; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    Solution(v);
    return 0;
}