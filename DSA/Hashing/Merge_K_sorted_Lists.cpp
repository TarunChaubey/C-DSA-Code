#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1 = {1,4,5};
    vector<int> v2 = {1,3,4};
    vector<int> v3 = {2,6};

    vector<int> temp;

    priority_queue<int, vector<int>, greater<int>> q;

    for(int val:v1){
        q.push(val);
    }

    cout<<q.top();


    return 0;
}