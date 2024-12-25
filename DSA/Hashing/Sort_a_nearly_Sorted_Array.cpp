#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int, vector<int>> q;
    q.push(4);
    q.push(7);
    q.push(8);
    q.push(10);
    q.push(50);
    q.push(60);
    q.push(70);

    int k;
    cin>>k;

    for(int i=0; i<k; i++){
        cout<<q.top<<endl;
        q.pop();
    }

    while (!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}